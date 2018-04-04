//
//  16205326s6q4.c
//  
//
//  Created by Mikhail Yankelevich on 09/03/2018.
//

#include <stdio.h>
void copy_string(char *from, char *to);
void make_it_uppercase(char *string, char *to);
void make_it_consonantless(char *string, char *to);
void output(char *string);

int main(void)
{
    char *slogan = "Comp10120 is my favourite module";
    printf("initial string: ");
    output(slogan);
    
    char slogan1[40];//initializing array for upper case
    char *slogan_uppercase= slogan1;//creating a pointer to an array
    make_it_uppercase(slogan,slogan_uppercase);//maing it uppercase
    printf("uppercase string: ");
    output(slogan_uppercase);//printing out the result
    
    char slogan2[40]; //creating an array for consonants
    char *slogan_consonantless=slogan2;//creating a pointer to an array
    make_it_consonantless(slogan_uppercase,slogan_consonantless);//making it consonantless
    printf("upper string: ");
    output(slogan_consonantless);//printing out the result
    
    return 0;
}


void output(char *string)
{
    printf("%s\n", string);//printing out an array
}


void make_it_uppercase(char *string, char *to)//converting an array to upercase
{
    int count =0;
    for(int i =0; i< 40; i++)
    {
        if (*(string+i)>='a' && *(string+i)<='z')//checking if the letter is lowercase
        {
            *(to+count)=*(string+i)-('a'-'A');//making the letter upercase and copping it
        }
        else
        {
            *(to+count)=*(string+i);//if not just copping it
        }
        count++;
    }
}

void make_it_consonantless(char *string, char *to)
{
    int count =0;
    for(int i =0; i< 40; i++)
    {
        if (*(string+i)!='B'&&*(string+i)!='C'&&*(string+i)!='D'&&*(string+i)!='F'&&*(string+i)!='G'&&*(string+i)!='H'&&*(string+i)!='J'&&*(string+i)!='K'&&*(string+i)!='L'&&*(string+i)!='M'&&*(string+i)!='N'&&*(string+i)!='P'&&*(string+i)!='Q'&&*(string+i)!='R'&&*(string+i)!='S'&&*(string+i)!='T'&&*(string+i)!='V'&&*(string+i)!='W'&&*(string+i)!='X'&&*(string+i)!='Y'&&*(string+i)!='Z')//checking if there are no consonants
        {
            *(to+count)=*(string+i);//if not copping string element
            count++;
            
        }
    }
}
