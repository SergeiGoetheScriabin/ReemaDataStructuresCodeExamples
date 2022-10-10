/*


Escape Sequences

\a audible signal
\b backspace
\t tab
\n newline
\v vertical tab/clearn screen
\r carriage return

Qualifying Input

int = %d
short = %d (decimal
long = %ld
char = %c (single char)
float = %f, %e, %E, %g, %G
double = %lf
long double = %Lf


scanf()
-used to read formatted data from the keyboard
-ignores blank spaces, tabs, and newlines

#include <stdio.h>
int main()
{
    char chr;
    printf("Enter a character: ");
    scanf("%c",&chr);     
    printf("You entered %c.", chr);  
    return 0;
}   

use this to understand how printf and scanf work together.


1 = true
0 = false

Relational Operators
< Less than                  // 3 < 5 gives 1
> Greater than               // 7 < 9 gives 0
>= Less than or equal to     // 100 >= 100 gives 1
<= Greater than equal to     // 50 >= 100 gives 0


Equality Operators
== Returns 1 if both operands are equal, 0 otherwise
!= Returns 1 if operands do not have the same value, 0 otherwise 


Logical Operators
AND = &&/& (bitwise version)
OR = ||/| (bitwise)
NOT = !/~


LOGICAL AND (&&)
A       B        A && B
0       0        0
0       1        0
1       0        0
1       1        1


LOGICAL OR (||)

A		B		A || B
0		0		0
0		1		1
1		0		1
1		1		1


LOGICAL NOT (!)

A		!A
0		1
1		0



Increment Operator (++) and Decrement Operator (--)
--x is equal to writing x = x - 1
++x is equal to writing x = x + 1



/*

