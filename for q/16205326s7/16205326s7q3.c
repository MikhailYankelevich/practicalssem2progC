//
//  16205326s7q3.c
//the program shuffles an array of words and then picks 1 random 
//
//  Created by Mikhail Yankelevich on 27/03/2018.
//
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAXSIZE 12
void shuffler(char *array[]);
void printresult(char *array[]);
void selectrandomword(char *array[]);



int main(void)
{
    srand(time(NULL));
   
    char *a[12]={"COMP10120","is","my","favourite","module","and","I","learn","lots","of","interesting","things"};
    printresult(a);//printing put the initial state
    shuffler(a);//shuffling words
    printresult(a);//printing out shuffled array
    selectrandomword(a);//printing out the random word
    return 0;
}


void shuffler(char *array[])//shuffling words
{
    int j;
    for (int i= 2; i<MAXSIZE; i++)//using fisher-yates( swaping each word with random standing before
    {
        j = rand()%(i-1);

        char *temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}




void printresult(char *array[])//printing the result
{
    for (int i= 0; i<MAXSIZE; i++)
        printf("%s ", array[i]);
    printf("\n");
}




void selectrandomword(char *array[])//selecting the random word
{
    int i = rand()%(MAXSIZE);
    printf("%s \n", array[i]);//printing out this word
}
