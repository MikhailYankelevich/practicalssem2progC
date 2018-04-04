//
//  16205326s8q1.c
//  for q
//
//  Created by Mikhail Yankelevich on 03/04/2018.
//

#include <stdio.h>
#include <stdlib.h>

union test{
    char a;
    short b;
    int c ;
    long d;
};


int main(void)
{
    union test Task;
    
    char a;
    short b;
    int c ;
    long d;

    
    printf("Enter char, short, int and long separated by spaces\n");
    scanf("%c%hu%d%ld", &a, &b,&c,&d);
    Task.a=a;
    Task.b=b;
    Task.c=c;
    Task.d=d;
    printf( "if printing straight away after scaning all in 1 bunch get: \n %c, %hu,\n %d, %ld\n as they are all storred in 1 memory slot\n",  Task.a, Task.b, Task.c, Task.d);
    printf(" if assigning and then printing:\n" );
    Task.a=a;
    printf(" char : %c\n", Task.a);
    printf(" courent size : %ld\n", sizeof(a) );
    printf(" size of union: %ld\n\n", sizeof(Task) );
    Task.b=b;
    printf(" Short: %hu\n", Task.b);
      printf(" courent size : %ld\n", sizeof(b) );
    printf(" size of union: %ld\n\n", sizeof(Task) );
    Task.c=c;
    printf(" Int:  %d\n", Task.c);
      printf(" courent size : %ld\n", sizeof(c) );
    printf(" size of union: %ld\n\n", sizeof(Task) );
    Task.d=d;
    printf(" Long: %ld\n", Task.d);
      printf(" courent size : %ld\n", sizeof(d) );
    printf(" size of union: %ld\n\n", sizeof(Task) );

    
   
    
    
    return 0;
    
}
