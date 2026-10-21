// Write a program to check whether a given character is uppercase or lowercase.

#include <stdio.h>

int main()
{
    char ch = 'T';

    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("Uppercase: %c", ch);
    }
    else
    {
        ch = ch + 32;
        printf("Lowercase: %c", ch);
    }
    
}
