//
//  q3_02_02_18.c
//
// calculating fibpnachi sequence 
//  Created by Mikhail Yankelevich on 06/02/2018.
//  
//

#include <stdio.h>
int fibonacci(int n);
int fib(int n);
int main(void)
{
    fibonacci(21);
}
int fibonacci(int n)//printing out all fiboncci sequence
{
    for (int i=0; i<n;i++)
        printf("%d ", fib(i));
    return 0;
}
int fib(int n)//calculating each
{
    
    
    if (n<=1)
    {
        
        return n;
    }
    else
    {
        int f= fib(n-1)+fib(n-2);//calulating courent number using previous
      
        return f;
    }
    
    return 0;
}


