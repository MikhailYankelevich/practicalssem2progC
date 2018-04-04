//
//  16205326s6q1.c
// the program gets info about students and outs it in text file
//
//  Created by Mikhail Yankelevich on 08/03/2018.
//

#include <stdio.h>
#include <string.h>
int check(char name[80],char surname[80], int student_numb, int phone_numb, char field[80],float GPA);
void enter_data(void);
int validatorGPA(float GPA);
int validatorNumbers(int number);
int validatorText(char text[30]);

int main(void)
{
    FILE *stud;
    stud=fopen("student.txt", "w+");//openning file for writing
   
    char name[80];
    char surname[80];
    int student_numb;
    int phone_numb;
    char field[80];
    float GPA;
    
    printf("enter students first name, surname, sturdent numb, 7 digit phone numb, field of study, GPA\n when you are finished press ctrl+d on mac & linux or ctrl+z on windows\n");//printing instructions for the user

    while (!feof(stdin))
    {
            printf("student: \n");
            scanf("%s%s%d%d%s%f", name, surname, &student_numb, &phone_numb,field,&GPA);//scanning the data
        
        if(check(name, surname,student_numb,phone_numb,field,GPA)==0)//cecking if the data is correct
        {
            printf("Incorrect information has been entered\n");//if not braking the loop
            break;
        }
        else
            if (check(name, surname,student_numb,phone_numb,field,GPA)==1)//if yes saving data into file
            {
                
                fprintf(stud, "%s %s %d %d %s %.2f\n", name, surname, student_numb, phone_numb,field,GPA);
                
            }
        
    }

    fclose(stud);//closing the file
    return 0;
    
    
}


//this function check the correctness of data 
int check(char name[80],char surname[80], int student_numb, int phone_numb, char field[80],float GPA)
{
    int check=0;
    
    for (int i=0; i<strlen(name); i++ )
        if ((name[i]>='A'&&name[i]<='Z')||(name[i]>='a'&&name[i]<='z'))//checking id the name is correct if yes check ++
            check+=1;

    for (int i=0; i<strlen(surname); i++ )
        if ((surname[i]>='A'&&surname[i]<='Z')||(surname[i]>='a'&&surname[i]<='z'))//checkign if surname is correct if yes check ++
           check+=1;

    for (int i=0; i<strlen(field); i++ )
        if ((field[i]>='A'&&field[i]<='Z')||(field[i]>='a'&&field[i]<='z'))//checking if field of studdies is correct if yes check ++
            check+=1;
    
    if (phone_numb>0||phone_numb<9999999)//checking if phone_numb is correct if yes check ++
        check+=1;

    if (GPA>=0 && GPA<=4.20)//checking if GPA is correct if yes check ++
        check+=1;

    if (student_numb>0)//checing if student number is correct if yes check ++
        check+=1;

if (check==6)//if everything is correct return 1
    return 1;
    return 0;//if not return 0
}

