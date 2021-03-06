/* auto-generated by genhelp.sh */
/* DO NOT EDIT! */
const char help_text[] = 
"#Chapter 25: Tents "
"\n"
"You have a grid of squares, some of which contain trees. Your aim is "
"to place tents in some of the remaining squares, in such a way that "
"the following conditions are met: "
"\n"
"- There are exactly as many tents as trees. "
"\n"
"- The tents and trees can be matched up in such a way that each "
"tent is directly adjacent (horizontally or vertically, but not "
"diagonally) to its own tree. However, a tent may be adjacent to "
"other trees as well as its own. "
"\n"
"- No two tents are adjacent horizontally, vertically _or "
"diagonally_. "
"\n"
"- The number of tents in each row, and in each column, matches the "
"numbers given round the sides of the grid. "
"\n"
"This puzzle can be found in several places on the Internet, and was "
"brought to my attention by e-mail. I don't know who I should credit "
"for inventing it. "
"\n"
"\n#25.1 Tents controls "
"\n"
"Left-clicking in a blank square will place a tent in it. Right-\n"
"clicking in a blank square will colour it green, indicating that you "
"are sure it _isn't_ a tent. Clicking either button in an occupied "
"square will clear it. "
"\n"
"If you _drag_ with the right button along a row or column, every "
"blank square in the region you cover will be turned green, and no "
"other squares will be affected. (This is useful for clearing the "
"remainder of a row once you have placed all its tents.) "
"\n"
"You can also use the cursor keys to move around the grid. Pressing "
"the return key over an empty square will place a tent, and pressing "
"the space bar over an empty square will colour it green; either key "
"will clear an occupied square. Holding Shift and pressing the cursor "
"keys will colour empty squares green. Holding Control and pressing "
"the cursor keys will colour green both empty squares and squares "
"with tents. "
"\n"
"(All the actions described in section 2.1 are also available.) "
"\n"
"\n#25.2 Tents parameters "
"\n"
"These parameters are available from the `Custom...' option on the "
"`Type' menu. "
"\n"
"_Width_, _Height_ "
"\n"
"Size of grid in squares. "
"\n"
"_Difficulty_ "
"\n"
"Controls the difficulty of the generated puzzle. More difficult "
"puzzles require more complex deductions, but at present none "
"of the available difficulty levels requires guesswork or "
"backtracking. "
"\n"
;
const char quick_help_text[] = "Place a tent next to each tree.";
