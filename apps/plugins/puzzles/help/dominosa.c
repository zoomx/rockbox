/* auto-generated by genhelp.sh */
/* DO NOT EDIT! */
const char help_text[] = 
"#Chapter 17: Dominosa "
"\n"
"A normal set of dominoes - that is, one instance of every "
"(unordered) pair of numbers from 0 to 6 - has been arranged "
"irregularly into a rectangle; then the number in each square has "
"been written down and the dominoes themselves removed. Your task is "
"to reconstruct the pattern by arranging the set of dominoes to match "
"the provided array of numbers. "
"\n"
"This puzzle is widely credited to O. S. Adler, and takes part of its "
"name from those initials. "
"\n"
"\n#17.1 Dominosa controls "
"\n"
"Left-clicking between any two adjacent numbers places a domino "
"covering them, or removes one if it is already present. Trying to "
"place a domino which overlaps existing dominoes will remove the ones "
"it overlaps. "
"\n"
"Right-clicking between two adjacent numbers draws a line between "
"them, which you can use to remind yourself that you know those two "
"numbers are _not_ covered by a single domino. Right-clicking again "
"removes the line. "
"\n"
"You can also use the cursor keys to move a cursor around the grid. "
"When the cursor is half way between two adjacent numbers, pressing "
"the return key will place a domino covering those numbers, or "
"pressing the space bar will lay a line between the two squares. "
"Repeating either action removes the domino or line. "
"\n"
"Pressing a number key will highlight all occurrences of that number. "
"Pressing that number again will clear the highlighting. Up to two "
"different numbers can be highlighted at any given time. "
"\n"
"(All the actions described in section 2.1 are also available.) "
"\n"
"\n#17.2 Dominosa parameters "
"\n"
"These parameters are available from the `Custom...' option on the "
"`Type' menu. "
"\n"
"_Maximum number on dominoes_ "
"\n"
"Controls the size of the puzzle, by controlling the size of the "
"set of dominoes used to make it. Dominoes with numbers going "
"up to N will give rise to an (N+2) x (N+1) rectangle; so, in "
"particular, the default value of 6 gives an 8x7 grid. "
"\n"
"_Ensure unique solution_ "
"\n"
"Normally, Dominosa will make sure that the puzzles it presents "
"have only one solution. Puzzles with ambiguous sections can be "
"more difficult and sometimes more subtle, so if you like you "
"can turn off this feature. Also, finding _all_ the possible "
"solutions can be an additional challenge for an advanced player. "
"Turning off this option can also speed up puzzle generation. "
"\n"
;
const char quick_help_text[] = "Tile the rectangle with a full set of dominoes.";
