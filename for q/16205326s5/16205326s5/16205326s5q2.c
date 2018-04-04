//
//  16205326s5q2.c
//  multyplying each element of an array by 10
//
//  Created by Mikhail Yankelevich on 27/02/2018.
//

#include <stdio.h>
int get_array(void);
int multiply_and_print_array(void);
int a[256];
int *array=a;
int count;
int main(void)
{
    printf("enter an array, when you wish to stop enter '0' \n");
    get_array();//getting an array
    printf("modified array: \n");
    multiply_and_print_array();//printing out modified array
    
}


int get_array(void)//getting an array untill getting 0
{
    
    scanf("%d ", (array));
    while (*(array+count)!=0)
    {
        count++;
        scanf("%d", (array+count));
    }
   
    return 0;
}

int multiply_and_print_array(void)//multyplying an array by 10
{
    for(int i =0; i< count; i++)
    {
        *(array+i)*=10;
        printf("    %d\n", *(array+i));
    }
    return 0;
}
