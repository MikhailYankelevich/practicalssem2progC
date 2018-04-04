//
//  q1_02_02_18.c
//  program counts the volume of the pyramid
//  Created by Mikhail Yankelevich 16205326 on 06/02/2018.
//
//

#include <stdio.h>
double pyVolCalculator(double i, double j);

int main(void)
{
     printf("%f", pyVolCalculator(2.0, 5.0));
}
double pyVolCalculator(double i, double j)
{
    return i*i*j/3;//returning the volume
}
