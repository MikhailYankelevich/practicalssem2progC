//
//  q5_02_02_18.c
//the program prints out similar numbers between first n triangular and star numbers
//
//  Created by Mikhail Yankelevich 16205326 on 08/02/2018.
//
//

#include <stdio.h>

int StarAndTriangleNumbers(int max);

int main(void)
{
    StarAndTriangleNumbers(250);
}
int StarAndTriangleNumbers(int max)
{
    int i;
    int j;
    int f = 0;
    int s[max], t[max];
    for (i=1; i<=max; i++)//setting an array of star numbers
    {
        s[i]=(6*i*(i-1))+1;
    }
    for (i=1;i<=max;i++)//setting an array of triangle numbers
        t[i] =t[i-1]+i;
    for (i=1; i<=max; i++)//checking if there are any star numbers ==triangle ones and prinitng them
    {
        for (j=1; j<=max; j++)
        {
            if (s[i]==t[j])
            {
                if(f==1)//if there are more, then 1 similar number, then printing out a coma between them
                {
                    printf(",");
                }
                printf("%d", s[i]);
                f = 1;
                break;
                
            }
          if (f==0)//exeting the checking loop id f==0
              break;
        }
        
    }
    return 0;
}
