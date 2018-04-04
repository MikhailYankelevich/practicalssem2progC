//
//  16205326s5q1.c
// shuffling an array of numbers using pointers
//  Created by Mikhail Yankelevich on 27/02/2018.

//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void reverseArray(int arraySize, int a[]);
void randomiseArray(int arraySize, int a[]);
void printArray(int arraySize, int a[], void (*arrayFunction)(int arraySize, int a[]));


int myArray[10] = {2,4,6,8,10,12,14,16,18,20};

int main (void)
{
    int i;
    printf("If you want to get a reverse order enter 1 or if you want to get a  random order enter 2\n" );//asking if user wants to randomize or to reverce the oreder
    scanf("%d", &i);
    if( i==1 )//if input =1 revercing an arry
    {
    reverseArray(10, myArray);
    printArray(10, myArray, reverseArray);
        
    }
    else//if input !=1 randomizing an arry
    {
    randomiseArray(10, myArray);
    printArray(10, myArray, randomiseArray);
        
    }
    return 0;
}

void reverseArray(int arraySize, int a[])//revercing an array by sqapping ith element and max length -i -1 up untill the middle of an array
{
    int swap;
    for (int i=0; i<arraySize/2; i++)
    {
        swap=a[i];
        a[i]=a[arraySize-i-1];
        a[arraySize-i-1]=swap;
    }
    
}

void randomiseArray(int arraySize, int a[])//randomizing an array using fisher yats algorithm( swapping ith element and random one
{
    srand(time(NULL));
    int j,swap;
    for (int i=0; i<arraySize; i++)
          {
              j=rand()%arraySize;
              swap=a[i];
              a[i]=a[j];
              a[j]=swap;
          }
}

void printArray(int arraySize, int a[], void (*arrayFunction)(int arraySize, int a[]))//printing out the array
{
    printf("\n");
    for (int i=0; i<arraySize; i++)
        printf("%d ", a[i]);
}


