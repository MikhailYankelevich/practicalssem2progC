//
//  task 1.c
//  for online test practical 1
//  program converts temperature from celcius to fah and reverce
//  Created by Mikhail Yankelevich on 30/01/2018.
//
//

#include <stdio.h>
double tempConverterCelc( double tempCelcius);// intit all fuctions of the prog
double tempConverterFah( double tempFah);

int main(void)// main function
{
    printf("%.2f\n", tempConverterCelc(-10));// calling fucnt to convert celc
    printf("%.2f\n", tempConverterFah(100));//calling funct to convert fah
    return 0;
}

double tempConverterCelc( double tempCelcius)// converting celc
{
    return (tempCelcius*1.8+32);// using convertion formula in return
}

 double tempConverterFah( double tempFah)// converting fah
{
    return ((tempFah-32)/1.8);// using convertion formula in return

}
