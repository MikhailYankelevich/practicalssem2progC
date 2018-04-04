//
//  16205326s5q3.c
// program makes a sting upercase
//  Created by Mikhail Yankelevich on 27/02/2018.
//
//

#include <stdio.h>
int get_array(void);
int uppercase_array(void);
int print_array(void);
char a[255];
char *array=a;
int count;
int main(void)
{
    printf("enter an array, when you wish to stop enter '0' \n");
    get_array();//getting the array
    uppercase_array();//conerting it to upper case
    printf("modified array: \n");//printing out the array
    print_array();
    
}


int get_array(void)//getting the string untill enterring 0
{
    scanf("%c", (array));
    while (*(array+count)!='0')
    {
        count++;
        scanf("%c", (array+count));
    }
    
    return 0;
}

int print_array(void)//printing out an array
{
    for(int i =0; i< count; i++)
    {
        printf("%c", *(array+i));
    }
    return 0;
}
int uppercase_array(void)//converting an array to upercase
{
    for(int i =0; i< count; i++)
    {
        if (*(array+i)>='a' && *(array+i)<='z')//checking if the letter is lowercase
            *(array+i)-='a'-'A';//making the letter upercase
    }
    return 0;
}


