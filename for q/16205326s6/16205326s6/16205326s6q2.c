//
//  162905326s6q2.c
//
//program pprints out all names of the student who got GPA>3.20 and ********** if they did not
//  Created by Mikhail Yankelevich on 08/03/2018.
//
//

#include <stdio.h>

int main(void)
{
    FILE *stud;
    stud=fopen("student.txt ", "r+");//open the file
    
    char name[80];
    char surname[80];
    int student_numb;
    int phone_numb;
    char field[80];
    float GPA;
    
    printf("(%-15s %-15s %-15s %-15s %-15s %-15s)\n", "name","surname", "student numb", "phone numb", "field of study", "GPA"  );//printing oiut the header for the table
    
    while (!feof(stud))
    {
        fscanf(stud, "%s %s %d %d %s %f\n", name, surname, &student_numb, &phone_numb,field,&GPA);
        if (GPA>3.20)
        {
            printf("%-15s %-15s %-15d %-15d %-15s %-15.2f\n", name, surname, student_numb, phone_numb,field,GPA);//printing out all students with GPA >3.20
        }
        else
            printf("*************************************\n");//if not priting out this
    }
    return 0;
}
    
