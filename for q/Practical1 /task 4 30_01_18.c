//
//  task 4 30_01_18.c
//  practical 1
//  checking if person is overweight or underweight using BMI
//  Created by Mikhail Yankelevich on 30/01/2018.
//

#include <stdio.h>
int  BMICalculator(double weight, double height);//intializign all fuctions


int main(void)
{
    printf("%d ",BMICalculator(70,180));//printing out if the person is overweight
    printf("%d ",BMICalculator(100,120));
    return 0;
}


int  BMICalculator(double weight, double height)//function calculating the BMI of the person based on weight and hight
{
    double h= height/100;// converting height in meters
    double BMI=(weight/(h*h));// using the formula to calulate BMI
                                   if (BMI>24.9) {return 2;}// if preson is overweight
                                   else if( BMI<18.5) {return 1;}//if preson is unmderweight
                                   else {return 0;}// if person is ok
}
