//
//  16205326s7q2.c
// program printd the reverce and normal of the array
//
//  Created by Mikhail Yankelevich on 27/03/2018.
//

#include <stdio.h>
#define printreverce(x) do{\
int i;\
for (i=0; i<5; i++)\
printf("%d ", x[4-i]);\
printf("\n");\
}while(0)//printing out the revere


#define printnormal(x) do{\
int i;\
for (i=0; i<5; i++)\
printf("%d ", x[i]); \
printf("\n");\
}while(0)//printing out the normal

int main (void)
{
    int myArray[5] = {1, 4, 8, 16, 32};
    printreverce(myArray);//printing out the revere
    printnormal(myArray);//printing out the normal
    return 0;
}
