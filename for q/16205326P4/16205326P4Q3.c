//
//  16205326P4Q3.c
//
//
//  Created by Mikhail Yankelevich on 20/02/2018.


#include <stdio.h>
int int_array(void);
int float_array(void);
int double_array(void);
int char_array(void);

int int_array_two(void);
int float_array_two(void);
int double_array_two(void);
int char_array_two(void);


int main(void)
{
    int_array();int_array_two();
    float_array();float_array_two();
    double_array();double_array_two();
    char_array();char_array_two();
    
    return 0;
}


int int_array(void)
{
    printf("for the integer array: \n ");
    int array[10]={0,1,2,3,4,5,6,7,8,9};//creating an array
    //int *apoint= array;//pointing the array address
    printf("an address of the array is %p\n", &array );//printing an array address
    for (int i =0; i<10; i++)//for all 10 array numbers printing out their address
    {
        int *point=&array[i];//piointing to the array element address
       printf("elenemt number %d, which is %d in tne array, has an address %p\n",i,array[i],point );//printing out the result
    }
    
    return 0;
}

int int_array_two(void)
{
    {
        printf("for the 2 dimentional integer array: \n ");
        int array[3][3]={0,1,2,3,4,5,6,7,8};//creating an array
        //int *apoint= array;//pointing the array address
        printf("an address of the array is %p\n", *array);//printing an array address
        for (int i =0; i<3; i++)//for all 10 array numbers printing out their address
            for( int j =0; j<3; j++)
        {
            int *point=&array[i][j];//piointing to the array element address
            printf("elenemt number %d:%d, which is %d in tne array, has an address %p\n",i,j,array[i][j],point );//printing out the result
        }
        
        return 0;
    }
}


int float_array (void)//doing the same as in int array but for float
{
    printf("for the float array: \n ");
    float array[10]={0,1,2,3,4,5,6,7,8,9};
   
    printf("an address of the array is %p\n", &array );
    for (int i =0; i<10; i++)
    {
        float *point=&array[i];
        printf("elenemt number %d, which is %f in tne array, has an address %p\n",i,array[i],point );
    }
    return 0;
}

int float_array_two(void)//doing the same as in 2 dimentional int array but for float
{
    printf("for the 2 dimentional  float array: \n ");
    float array[3][3]={0,1,2,3,4,5,6,7,8};
    
    printf("an address of the array is %p\n", *array );
    for (int i =0; i<3; i++)
         for( int j =0; j<3; j++)
    {
        float *point=&array[i][j];
        printf("elenemt number %d:%d, which is %f in tne array, has an address %p\n",i,j,array[i][j],point );
    }
    return 0;
}


int double_array(void)//doing the same as in int array but for float
{
    printf("for the double array: \n ");
    double array[10]={0,1,2,3,4,5,6,7,8,9};
    
    printf("an address of the array is %p\n", &array );
    for (int i =0; i<10; i++)
    {
        double *point=&array[i];
        printf("elenemt number %d, which is %lf in tne array, has an address %p\n",i,array[i],point );
    }
    return 0;
}

int double_array_two(void)//doing the same as in 2 dimentional int array but for float
{
    printf("for the 2 dimentional double array: \n ");
    double array[3][3]={0,1,2,3,4,5,6,7,8};
    
    printf("an address of the array is %p\n", *array );
    for (int i =0; i<3; i++)
         for( int j =0; j<3; j++)
    {
        double *point=&array[i][j];
        printf("elenemt number %d:%d, which is %lf in tne array, has an address %p\n",i,j,array[i][j],point );
    }
    return 0;
}

int char_array(void)//doing the same as in int array but for float
{
    printf("for the char array: \n ");
    char array[10]={'a','b','c','d','e','f','g','h','i','j'};
    printf("an address of the array is %p\n", &array );
    for (int i =0; i<10; i++)
    {
        char *point=&array[i];
        printf("elenemt number %d, which is %c in tne array, has an address %p\n",i,array[i],point );
    }
    return 0;
}

int char_array_two(void)//doing the same as in 2 dimentional int array but for float
{
    printf("for the 2 dimentional char array: \n ");
    char array[3][3]={'a','b','c','d','e','f','g','h','i'};
    printf("an address of the array is %p\n", *array );
    for (int i =0; i<3; i++)
         for( int j =0; j<3; j++)
    {
        char *point=&array[i][j];
        printf("elenemt number %d:%d, which is %c in tne array, has an address %p\n",i,j,array[i][j],point );
    }
    return 0;
}

