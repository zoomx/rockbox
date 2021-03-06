/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * $Id: backlight-hdd.c 28307 2010-10-18 19:54:18Z b0hoon $
 *
 * Copyright (C) 2008 by Mark Arigo
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/
#include "config.h"
#include "backlight-target.h"
#include "system.h"
#include "backlight.h"
#include "lcd.h"
#include "synaptics-mep.h"

#ifdef HAVE_BACKLIGHT_BRIGHTNESS
static const int brightness_vals[16] =
                {255,237,219,201,183,165,147,130,112,94,76,58,40,22,5,0};

void backlight_hw_brightness(int brightness)
{
    outl(0x80000000 | (brightness_vals[brightness-1] << 16), 0x7000a000);
}
#endif

void backlight_hw_on(void)
{
#ifdef HAVE_LCD_ENABLE
    lcd_enable(true);
#endif

    GPO32_ENABLE |= 0x400;
    GPO32_VAL    |= 0x400;
}

void backlight_hw_off(void)
{
    GPO32_ENABLE |= 0x400;
    GPO32_VAL    &= ~0x400;

#ifdef HAVE_LCD_ENABLE
    lcd_enable(false);
#endif
}

#ifdef HAVE_BUTTON_LIGHT
#define BUTTONLIGHT_MASK 0x64
static unsigned short buttonight_brightness = DEFAULT_BRIGHTNESS_SETTING - 1;
static unsigned short buttonlight_status = 0;

void buttonlight_hw_on(void)
{
    if (!buttonlight_status)
    {
        /* enable 1 led (from 2) for MENU - GPO, module 1 */
        /* no need to enable led for the hidden button */
        touchpad_set_parameter(0x01,0x21,0x01);
        /* enable 3 leds (from 5) for PREV, PLAY and NEXT, */
        /* skip 2 leds because their light does not pass */
        /* through the panel anyway - on GPOs, module 0 */
        touchpad_set_parameter(0x00,0x22,0x15);
        /* left, right and the scrollstrip (1 led from 5) */
        touchpad_set_buttonlights(BUTTONLIGHT_MASK, buttonight_brightness);
        buttonlight_status = 1;
    }
}

void buttonlight_hw_off(void)
{
    if (buttonlight_status)
    {
        /* disable all leds on GPOs for module 0 and 1 */
        touchpad_set_parameter(0x01,0x21,0x00);
        touchpad_set_parameter(0x00,0x22,0x00);
        touchpad_set_buttonlights(BUTTONLIGHT_MASK, 0);
        buttonlight_status = 0;
    }
}

void buttonlight_hw_brightness(int brightness)
{
    touchpad_set_parameter(0x01,0x21,0x01);
    touchpad_set_parameter(0x00,0x22,0x15);
    buttonight_brightness = brightness - 1;
    touchpad_set_buttonlights(BUTTONLIGHT_MASK, buttonight_brightness);
    buttonlight_status = 1;
}
#endif
