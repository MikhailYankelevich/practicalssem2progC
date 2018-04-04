//
//  16205326P3Q4.c
//  the program calculates the maximum and average speed along with discounts which may be recieved
//
//  Created by Mikhail Yankelevich on 13/02/2018.
//
//

#include <stdio.h>
void maxSpeed (int i[]);
void AverageSpeed(int i[]);

int main(void)
{
    int A[] = {3,2,6,7,10,16,6};
    int B[] = {5,5,7,4,3,5,6};
    int C[] = {1,2,2,1,1,2,3};
    maxSpeed(A);
    maxSpeed(B);
    maxSpeed(C);
    AverageSpeed(A);
    AverageSpeed(B);
    AverageSpeed(C);
    return 0;
}

void maxSpeed (int i[])//calculating the max speed
{
    int j;
    int max=0;
    for(j=0; j<7;j++)
        if (i[j]>max){max=i[j];}//checking the max value of 7
    printf("The max speed is %d mph\n", max);//printing out the result
}

void AverageSpeed(int i[])//calculating the average speed
{
    int j;
    int a=0;
    for(j=0; j<7;j++)//calculating the average of 7 values
        a+=i[j];
    a=a/7;
    printf("The average speed is : %d mph\n",a);//printing out the results
    if (a>5)//checking if discount is needed 
        printf("There is no discount!\n");
    else
        printf("You have earned a discount!\n");
}


