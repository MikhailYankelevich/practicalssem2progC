//
//  task 6 30_01_18.c
//  practical 1
//calculating the price considering discounts
//  Created by Mikhail Yankelevich on 30/01/2018.
//
//

#include <stdio.h>
int  beanPricer(int n);//intializing all fuctions

int main(void)
{
    printf("%d ", beanPricer(155));//prinitng out the result for 155 beans
    return 0;
}

int  beanPricer(int n)// bean price calculating funct
{
    int sum=0;
    if (n<=100) {sum = n*5;}// if less then 100
    else if (n<=250) {sum= (n-100)*3 + 500;}//if less then 250
    else if (n<=700) {sum= 500+150*3 +(n-250)*2;}//if less then 700
    else if (n>700) {sum= 500+150*3+450*2+(n-700)*1;};//if more then 700
    return sum;//returning the final price
}
