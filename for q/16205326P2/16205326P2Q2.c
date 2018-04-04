//
//  q2_02_02_18.c
//the program calculates day f birthn from the date 
//
//  Created by Mikhail Yankelevich 16205326 on 06/02/2018.
//
//

#include <stdio.h>
int birthdayDay(int days, int month, int year);


int main(void)
{
    birthdayDay(6,2,2000);
    
}

int birthdayDay(int days, int month, int year)
{
    if (month==1)//setting up january and february according to formula (turning it into 13 and 14
    {month =13;
        days--;}
    if (month==2){
        month=14;
        days--;}
    int K=year%100;
    int J=year/100;
    int w=(days+(13*(month+1)/5)+K+K/4+J/4+5*J)%7 ;//calculating the day
    if (w==0)//printing out the resut 
        printf("You were born on Saturday");
        else if (w==1)
            printf( "You were born on Sunday");
               else if (w==2)
                    printf("You were born on Monday");
                else if (w==3)
                    printf("You were born on Tuseday");
                       else if (w==4)
                            printf("You were born on Wednesday");
                        else if (w==5)
                            printf("You were born on Thursday");
                            else if (w==6)
                                printf("You were born on Friday");

    return 0;
}
