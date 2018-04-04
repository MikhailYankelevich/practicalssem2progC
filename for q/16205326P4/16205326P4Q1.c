//
//  16205326P4Q1.c
//
//  the program prints out a multiplication table from 1 to 16 for entered number
//  Created by Mikhail Yankelevich on 20/02/2018.
//
//

#include <stdio.h>

void multiplicationTable(int n);


int main(void)
{
    int number;
    printf("Enter a value: ");
    scanf("%d",&number);
    multiplicationTable(number);
}

void multiplicationTable(int n)
{
    for(int i=1; i<16; i++)//printing out the first 16 number of multiplication table of given number
        printf("%d x %d = %d\n", n, i, n*i);
}
