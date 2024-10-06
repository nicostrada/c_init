# include <stdio.h>

int main() {
    printf("Hello World!\n\n");
    printf("Have a good day!");
    /* printf("Have a good day!"); */

    int   myNum      =  15;
    float myFloatNum =  5.99;
    char  myLetter   =  'D';

    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);
    printf("\n");

    int x = 5, y = 6, z = 50;
    printf("%d", x+y+z);

/* 
The general rules for naming variables are:
*    Names can contain letters, digits and underscores
*    Names must begin with a letter or an underscore (_)
*    Names are case-sensitive (myVar and myvar are different variables)
*    Names cannot contain whitespaces or special characters like !, #, %, etc.
*    Reserved words (such as int) cannot be used as names 
*/

/* Char variable*/
    char myGrade = 'A';
    printf("%c", myGrade);
    char a=65, b=66, c=67;
    printf("%c", a);
    printf("%c", b);
    printf("%c", c);

    /* String variable*/
    char myText[] = "Hello";
    printf("%s", myText);

    /* Numeric variables*/
    

    return 0;
}