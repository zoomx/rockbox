/* auto-generated by genhelp.sh */
/* DO NOT EDIT! */
const char help_text[] = 
"#Chapter 36: Pearl "
"\n"
"You have a grid of squares. Your job is to draw lines between the "
"centres of horizontally or vertically adjacent squares, so that the "
"lines form a single closed loop. In the resulting grid, some of the "
"squares that the loop passes through will contain corners, and some "
"will be straight horizontal or vertical lines. (And some squares can "
"be completely empty - the loop doesn't have to pass through every "
"square.) "
"\n"
"Some of the squares contain black and white circles, which are clues "
"that the loop must satisfy. "
"\n"
"A black circle in a square indicates that that square is a corner, "
"but neither of the squares adjacent to it in the loop is also a "
"corner. "
"\n"
"A white circle indicates that the square is a straight edge, but _at "
"least one_ of the squares adjacent to it in the loop is a corner. "
"\n"
"(In both cases, the clue only constrains the two squares adjacent "
"_in the loop_, that is, the squares that the loop passes into after "
"leaving the clue square. The squares that are only adjacent _in the "
"grid_ are not constrained.) "
"\n"
"Credit for this puzzle goes to Nikoli, who call it `Masyu'. [19] "
"\n"
"Thanks to James Harvey for assistance with the implementation. "
"\n"
"[19] http://www.nikoli.co.jp/en/puzzles/masyu.html (beware of Flash) "
"\n"
"\n#36.1 Pearl controls "
"\n"
"Click with the left button on a grid edge to draw a segment of the "
"loop through that edge, or to remove a segment once it is drawn. "
"\n"
"Drag with the left button through a series of squares to draw more "
"than one segment of the loop in one go. Alternatively, drag over an "
"existing part of the loop to undraw it, or to undraw part of it and "
"then go in a different direction. "
"\n"
"Click with the right button on a grid edge to mark it with a cross, "
"indicating that you are sure the loop does not go through that edge. "
"(For instance, if you have decided which of the squares adjacent "
"to a white clue has to be a corner, but don't yet know which way "
"the corner turns, you might mark the one way it _can't_ go with a "
"cross.) "
"\n"
"Alternatively, use the cursor keys to move the cursor. Use the Enter "
"key to begin and end keyboard `drag' operations. Use the Space, "
"Escape or Backspace keys to cancel the drag. Or, hold Control while "
"dragging with the cursor keys to toggle segments as you move between "
"squares. "
"\n"
"Pressing Control-Shift-arrowkey or Shift-arrowkey simulates a left "
"or right click, respectively, on the edge in the direction of the "
"key. "
"\n"
"(All the actions described in section 2.1 are also available.) "
"\n"
"\n#36.2 Pearl parameters "
"\n"
"These parameters are available from the `Custom...' option on the "
"`Type' menu. "
"\n"
;
const char quick_help_text[] = "Draw a single closed loop, given clues about corner and straight squares.";
