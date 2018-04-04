//
//  task 3 30_01_18.c
//  practical 1
//  printing out all digits of the 6 digit number and the summ of them
//  Created by Mikhail Yankelevich on 30/01/2018.
//
//

#include <stdio.h>
int spacer(int numb);//intializign all fuctions

int main(void)
{
    printf("%d ", spacer(123456));// printing out the summ of digits for 123456
    return 0;
}

int spacer(int numb)// function sepataitng each digit of the number and calculating the summ of all digits
{
    int a[5];
    
    a[0]= numb/100000;// first digit
    numb=numb-a[0]*100000;// cutting the first digit
    int sum= a[0];//adding to the summ of digits
    
    
    
    a[1]= numb/10000;//the second digit
    numb=numb-a[1]*10000;// cutting the second digit
    sum=sum +a[1];//adding to all ofthe digits
    
  
    a[2]= numb/1000;// the thid digit
    numb=numb-a[2]*1000;// cutting the thid digit
    sum=sum+a[2];//adding to all ofthe digits
    
 
    a[3]= numb/100;// the forth digit
    numb=numb-a[3]*100;// cutting the forth digit
    sum=sum+a[3];//adding to all ofthe digits
    

    a[4]= numb/10;// the fifth digit
    numb=numb-a[4]*10;// numb is now the sixth digit
    sum=sum+a[4]+numb;//adding to all ofthe digits
    
    
    
   printf ("%d    %d    %d    %d    %d    %d    ", a[0],a[1],a[2],a[3],a[4], numb);// printing out the numbers
    return sum;// returning the sum of digits
}
