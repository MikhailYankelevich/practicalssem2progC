//
//  16205326P4Q4.c

//
//  Created by Mikhail Yankelevich on 22/02/2018.



#include <stdio.h>
int main(void)
{
    char char_type;//initializing char value
    printf("Char-%ld byte \n",sizeof(char_type));//printing out its size
    
    int int_type;//the same manipulatona for int, long, long long, double, long double, float, int array and pointer to an array 
    printf("Int-%ld bytes \n",sizeof(int_type));
    
    long long_type;
    printf("Long-%ld bytes \n",sizeof(long_type));
    
    long long longlong_type;
    printf("Long long-%ld bytes \n",sizeof(longlong_type));
    
    double double_type;
    printf("Double-%ld bytes \n",sizeof(double_type));
    
    long double longdouble_type;
    printf("Long double-%ld bytes \n",sizeof(longdouble_type));
    
    float float_type;
    printf("Float-%ld bytes \n",sizeof(float_type));
    
    int array[10];
    printf("Array of 10 int-%ld bytes \n",sizeof(array));
    
    int *a=array;
    printf("pointer to an array of int-%ld bytes \n",sizeof(*a));

    return 0;
}
