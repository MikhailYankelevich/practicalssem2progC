//
//  16205326P4Q2.c
//
//
//  Created by Mikhail Yankelevich on 20/02/2018.
//
//

#include <stdio.h>

void primeByRef(int *i);
int primeByVal(int i);

int main(void)
{
    int n;
    scanf("%d",&n);
    printf("The value of n is: %d \n",primeByVal(n));
    primeByRef(&n);
    printf("The new value of n is: %d \n", n);
    return 0;
}

void primeByRef(int *i)//finging prime number with pointers
{

    for ( int j=2; j<*i; j++)//checking if the value is prime by deviding it by every number from 2 up to itself -1
    {
        if( *i % j==0)
        {
            *i=0;//if it is devisible set it to 0
        }
    }
    // finding numbers square if it is not prime *i will already be 0, so nothig will cahnge
        *i*=*i;
    printf("The new value of n is: %d\n", *i);
}

int primeByVal(int i)//finding the prime number without pointers
{
  
    for ( int j=2; j<i; j++)//checking if the value is prime by deviding it by every number from 2 up to itself -1
    {
        if( i % j==0)
        {
            return 0;//if it is devisible return 0
        }
    }
    return i*i;//if it isn't return 1
}
