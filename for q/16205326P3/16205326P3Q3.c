//
//  16205326P3Q3.c
//  program calculates the determinant of the 3x3 matrix
//
//  Created by Mikhail Yankelevich on 13/02/2018.
//
//

#include <stdio.h>
void detCalculator(int matrix[][3], int order);

int main(void)
{
    int matrix1[3][3] = {{0,3,1}, { 1, 3,1 }, { 7, 6,8 }};
    detCalculator(matrix1,3);
    return 0;
}
void detCalculator(int matrix[][3], int order)
{
    int a= (matrix[0][0]*(matrix[1][1]*matrix[2][2]-matrix[1][2]*matrix[2][1]))-(matrix[0][1]*(matrix[1][0]*matrix[2][2]-matrix[2][0]*matrix[1][2]))+(matrix[0][2]*(matrix[1][0]*matrix[2][1]-matrix[1][1]*matrix[2][0]));//calculating the det of the 3x3 matrix
    printf("%d\n", a);//printing out the results
    
}
