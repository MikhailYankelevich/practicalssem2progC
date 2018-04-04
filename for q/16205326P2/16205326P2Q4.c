//
//  q4_02_02_18.c
//converting base 10 number into base 2 
//  Created by Mikhail Yankelevich 16205326 on 08/02/2018.
//

#include <stdio.h>
long long base10to2 (int base10_number);

int main()
{
    printf("%lld",base10to2(50));
}


long long base10to2 (int base10_number)//converting base 10 number into base 2
{
    if (base10_number == 0)//if base 10 number ==0 returning 0
        return 0;
    else
        return (base10_number%2 + base10to2(base10_number/2)*10);//returning the conversion
}
