/* auto-generated by genhelp.sh */
/* DO NOT EDIT! */
const char help_text[] = 
"#Chapter 39: Flood "
"\n"
"You are given a grid of squares, coloured at random in multiple "
"colours. In each move, you can flood-fill the top left square in a "
"colour of your choice (i.e. every square reachable from the starting "
"square by an orthogonally connected path of squares all the same "
"colour will be filled in the new colour). As you do this, more and "
"more of the grid becomes connected to the starting square. "
"\n"
"Your aim is to make the whole grid the same colour, in as few moves "
"as possible. The game will set a limit on the number of moves, based "
"on running its own internal solver. You win if you can make the "
"whole grid the same colour in that many moves or fewer. "
"\n"
"I saw this game (with a fixed grid size, fixed number of colours, "
"and fixed move limit) at http://floodit.appspot.com (no longer "
"accessible). "
"\n"
"\n#39.1 Flood controls "
"\n"
"To play Flood, click the mouse in a square. The top left corner and "
"everything connected to it will be flood-filled with the colour of "
"the square you clicked. Clicking a square the same colour as the top "
"left corner has no effect, and therefore does not count as a move. "
"\n"
"You can also use the cursor keys to move a cursor (outline black "
"square) around the grid. Pressing the return key will fill the top "
"left corner in the colour of the square under the cursor. "
"\n"
"(All the actions described in section 2.1 are also available.) "
"\n"
"\n#39.2 Flood parameters "
"\n"
"These parameters are available from the `Custom...' option on the "
"`Type' menu. "
"\n"
"_Width_, _Height_ "
"\n"
"Size of the grid, in squares. "
"\n"
"_Colours_ "
"\n"
"Number of colours used to fill the grid. Must be at least 3\n"
"(with two colours there would only be one legal move at any "
"stage, hence no choice to make at all), and at most 10. "
"\n"
"_Extra moves permitted_ "
"\n"
"Controls the difficulty of the puzzle, by increasing the move "
"limit. In each new grid, Flood will run an internal solver to "
"generate its own solution, and then the value in this field "
"will be added to the length of Flood's solution to generate the "
"game's move limit. So a value of 0 requires you to be just as "
"efficient as Flood's automated solver, and a larger value makes "
"it easier. "
"\n"
"(Note that Flood's internal solver will not necessarily find the "
"shortest possible solution, though I believe it's pretty close. "
"For a real challenge, set this value to 0 and then try to solve "
"a grid in _strictly fewer_ moves than the limit you're given!) "
"\n"
;
const char quick_help_text[] = "Turn the grid the same colour in as few flood fills as possible.";
