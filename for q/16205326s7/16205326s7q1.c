//
//  1234567s7q1.c
//  program finds the smallest of the 4 numbers usifn macro
//
//
//  Copyright © 2018 Mikhail Yankelevich. All rights reserved.
//

#include <stdio.h>
#define MINIMUMOFTWO(x,y)((x)<(y) ? (x):(y))//if x<y then x or else y
#define MINIMUMOFFOR(x,y,z,q)(MINIMUMOFTWO(x,y)<MINIMUMOFTWO(z,q) ? MINIMUMOFTWO(x,y):MINIMUMOFTWO(z,q))//the same but for2  prev functions

int main(void)
{
    int x,y,z,q;
    scanf("%d", &x);//scanning nubers
    scanf("%d", &y);
    scanf("%d", &z);
    scanf("%d", &q);
    int min= MINIMUMOFFOR(x,y,z,q);//calculating minimum
    printf("%d\n", min);//printing out the result
    
    
    return 0;
}
