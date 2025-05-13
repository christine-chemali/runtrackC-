//Wich parentheses ? eliminate unwanted parentheses
/*
a = (x+5)
a = (x=y)+2
a=(x==z)
(a<b) && (c<d)
(i++) * (n+p)
*/
//Correct version
a = x + 5; //addition operation has clear precedence
a = x = y +2; //x = y +2 will correctly assign the value of y+2 to x before assigning it to a
a = x == z; // comparison x == y does not require ()
a < b && c < d; //comparison > < does not require ()
i++ *(n+p); // () arround  i++ not needed because increment operator has higher precedence than multiplication
            //() around n+p are retained because they clarify that n+p should be evaluated together before *
// Created by chris on 13/05/2025.
//
