//
//  16205326P3Q2.c
//  the program prints out nxn matrix from 1 to n^2
//
//  Created by Mikhail Yankelevich on 13/02/2018.
//
//

#include <stdio.h>
void create2DMatrix(int i);

int main(void)
{
    int order;
    scanf("%d",&order);
    create2DMatrix(order);
    return 0;
}

void create2DMatrix(int i)
{
   
    int count=0;
    for(int j=1; j<=(i*i); j++)//counting each number with the step of 1
        {
            if (count==i) //every n numbers incert new line
            {
                printf("\n");
                count =0;
            }
            count++;
            printf("%d |", j);//printing out the number
     
        }
}

