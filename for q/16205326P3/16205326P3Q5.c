//
//  16205326P3Q5.c
//  the program calculates data about taxi car park
//
//  Created by Mikhail Yankelevich on 13/02/2018.
//
//

#include <stdio.h>
int carIn(int inBatch[]);
int carOut(int outBatch[]) ;
void currentState(int x, int y);
int salesMade(int i);

int NumberOfCarsThatEnteredSoFar;
int NumberOfCarsThatLeftSoFar;

int main(void)
{
    int inBatch[] = {1,2,5};//initializing arrays of number of cars every 20 min
    int inBatch1[] = {1,3,2};
    int outBatch[] = {1,2,1};
    int outBatch1[] = {1,1,2};
    carIn(inBatch);//calculating cars in
    carIn(inBatch1);
    carOut(outBatch);//calculating cars out
    carOut(outBatch1);
    currentState(NumberOfCarsThatEnteredSoFar,NumberOfCarsThatLeftSoFar);//checking courent sate
   salesMade(NumberOfCarsThatLeftSoFar);//calculating the profit
    return 0;
}

int carIn(int inBatch[])
{
    int NumberOfCarsThatEnteredSoFarThisHr=0;//number of cars this hr (every array starts from 0)
    for (int i=0; i<3; i++)//calcualting number of cars so far and in this hr for array
    {
        NumberOfCarsThatEnteredSoFar+=inBatch[i];
        NumberOfCarsThatEnteredSoFarThisHr+=inBatch[i];
    }
    printf("Total vehicle entry: %d\n",NumberOfCarsThatEnteredSoFar);//printing out the result
    printf("Hourly vehicle entry: %d\n",NumberOfCarsThatEnteredSoFarThisHr);
    return 0;
}

int carOut(int outBatch[])
{
   int NumberOfCarsThatLeftSoFarThisHr=0;//number of cars this hr (every array starts from 0)
    for (int i=0; i<3; i++)//calcualting number of cars so far and in this hr for array
    {
        NumberOfCarsThatLeftSoFar+=outBatch[i];
        NumberOfCarsThatLeftSoFarThisHr+=outBatch[i];
    }
    printf("Total vehicle exit: %d\n",NumberOfCarsThatLeftSoFar);//printing out the result
    printf("Hourly vehicle exit: %d\n",NumberOfCarsThatLeftSoFarThisHr);
    return 0;
}

void currentState(int x, int y)
{
    int state =NumberOfCarsThatEnteredSoFar-NumberOfCarsThatLeftSoFar;//calculating number of cars in the car park
    printf("Vehicles remaining in the park : %d\n",state);//printing out the result
}

int salesMade(int i)
{
    double eur=NumberOfCarsThatLeftSoFar*2.50;//calculating the profit by multypling overall number of cars left by the tarif
    printf("The park has made Euros %.2f\n",eur);//printing out the result
    return 0;
}
