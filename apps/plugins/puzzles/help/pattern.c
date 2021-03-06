/* auto-generated by genhelp.sh */
/* DO NOT EDIT! */
const char help_text[] = 
"#Chapter 10: Pattern "
"\n"
"You have a grid of squares, which must all be filled in either black "
"or white. Beside each row of the grid are listed the lengths of the "
"runs of black squares on that row; above each column are listed the "
"lengths of the runs of black squares in that column. Your aim is to "
"fill in the entire grid black or white. "
"\n"
"I first saw this puzzle form around 1995, under the name "
"`nonograms'. I've seen it in various places since then, under "
"different names. "
"\n"
"Normally, puzzles of this type turn out to be a meaningful picture "
"of something once you've solved them. However, since this version "
"generates the puzzles automatically, they will just look like random "
"groupings of squares. (One user has suggested that this is actually "
"a _good_ thing, since it prevents you from guessing the colour of "
"squares based on the picture, and forces you to use logic instead.) "
"The advantage, though, is that you never run out of them. "
"\n"
"\n#10.1 Pattern controls "
"\n"
"This game is played with the mouse. "
"\n"
"Left-click in a square to colour it black. Right-click to colour it "
"white. If you make a mistake, you can middle-click, or hold down "
"Shift while clicking with any button, to colour the square in the "
"default grey (meaning `undecided') again. "
"\n"
"You can click and drag with the left or right mouse button to colour "
"a vertical or horizontal line of squares black or white at a time "
"(respectively). If you click and drag with the middle button, or "
"with Shift held down, you can colour a whole rectangle of squares "
"grey. "
"\n"
"You can also move around the grid with the cursor keys. Pressing the "
"return key will cycle the current cell through empty, then black, "
"then white, then empty, and the space bar does the same cycle in "
"reverse. "
"\n"
"Moving the cursor while holding Control will colour the moved-over "
"squares black. Holding Shift will colour the moved-over squares "
"white, and holding both will colour them grey. "
"\n"
"(All the actions described in section 2.1 are also available.) "
"\n"
"\n#10.2 Pattern parameters "
"\n"
"The only options available from the `Custom...' option on the `Type' "
"menu are _Width_ and _Height_, which are self-explanatory. "
"\n"
;
const char quick_help_text[] = "Fill in the pattern in the grid, given only the lengths of runs of black squares.";
