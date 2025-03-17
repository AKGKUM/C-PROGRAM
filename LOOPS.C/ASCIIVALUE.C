// write a program to print all the ascii value and their equivalent charecter of 26 alphabet using for loops.


#include<stdio.h>
int main()
{
    for( int i=65; i<=90; i++)
    {
    char ch=(char)i;
    printf(" %c-->", ch);
    printf("%d\n", i);
    }
}