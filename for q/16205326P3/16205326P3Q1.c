//
//  16205326P3Q1.c
// 
//
//  Created by Mikhail Yankelevich on 13/02/2018.
//

#include <stdio.h>
char* reverseString(char text[], int numberOfLetters);

int main(void)
{
    char text[120];
    int numberOfLetters = 0;
    scanf("%s",text);
    printf("\n");
    scanf("%d",&numberOfLetters);
    reverseString(text,numberOfLetters);
}

char* reverseString(char text[], int numberOfLetters)
{
    int i;
    for (i=0; i<numberOfLetters;i++)//saving last letter of the string into first new and so on
    {
    printf("%c", text[numberOfLetters-i]);//printing the result
    }
    return 0;
    
}
