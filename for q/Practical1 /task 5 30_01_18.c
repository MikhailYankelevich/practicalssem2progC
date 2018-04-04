//
//  task 5 30_01_18.c
//  practical 1
// math testing 3 nubers 
//  Created by Mikhail Yankelevich on 30/01/2018.
//
//

#include <stdio.h>
int mathTest(int x, int y, int z);//intializing all fuctions

int main(void)
{
    mathTest(1,2,3);//using math test for numbers 1, 2 and 3
    return 0;
}

int mathTest(int x, int y, int z)// math testing x y and z
{
    double avg= (x+y+z)/3.0;//calculating the average
    int sum=x+y+z;// calculating the sum
    int prod=x*y*z;// calculating the product
    int max,min;
    if (x>=y)//setting up min and max of x and y( larger ==max, smaller == min)
    {
        max =x;
        min=y;
    }
    else {max =y; min =x;};
    if (z>=max){max = z;}//chicking if z larger then max
    else if (z<=min) {min=z;};//checing if z is smaller then min
    
    printf( "The three numbers are %d, %d and %d. The average is %.2f. The product is %d. The sum is %d. The largest is %d. The smallest is %d.", x, y, z, avg, prod, sum, max, min);// printing the result
    return 0;
}
