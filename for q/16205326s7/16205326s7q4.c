//
//  16205326s7q4.c
// program keeps the record of the games
//
//  Created by Mikhail Yankelevich on 29/03/2018.
//

#include <stdio.h>
#include <time.h>
#include <string.h>

typedef struct game//struct for games
{
    char title [20];
    char platform [10];
    char developer[20];
    int year;
}game;

typedef struct Borrow//struct for people who borrow
{
    char nameBrrow[20];
    int dayBorrow;
    int monthBorrow;
    int yearBorrow;
}Borrow;

void getGameInfo(FILE *database);
void changeInfo(FILE *database);
void printDatabase(FILE *database);
void getstring(char *string,FILE *database);
void getBorrowInfo(FILE *database);

int main(void)
{
    FILE *database;
    database = fopen("database.dat", "r+");//opennig the file
    
    
    //checkingwhat user wants to do
    printf("If you wish to add a new game info enter 1, \n if you wish to add a person enter 2\n");
    int i;
    scanf("%d", &i);
    
    if (i==1)
        getGameInfo(database);//if 1 go to gatting game info
    else if (i==2)
        getBorrowInfo(database);//if 2 go to get borrowers name

    
    fclose(database);//closing the file
    return 0;
}

void getGameInfo(FILE *database)
{
    int i=0;
    while (i==0)//while user would not type in 1 in the end gettijng info about games
    {
    printf("enter name of the game\n");
        
    struct game game1;
        
        
    fgets(game1.title, 20, stdin);//gettinggame title
    if (strcmp(game1.title,"\n")==0)//if it acidentely became \n do it second time
        fgets(game1.title, 20, stdin);
    getstring(game1.title, database);//iluminating all spases and \n
    fprintf(database,"%-20s", game1.title);//writing down the result

        
    printf("enter name of the platform\n");
    fgets(game1.platform,10 , stdin);
    getstring(game1.platform, database);//iluminating all spases and \n
    fprintf(database,"%-20s", game1.platform);//writing down the result
    
    printf("enter name of the developer\n");
    fgets(game1.developer, 20, stdin);
    getstring(game1.developer, database);//iluminating all spases and \n
    fprintf(database,"%-20s", game1.developer);//writing down the result
    
    printf("enter the year which game was anounced\n");
    scanf("%d", &game1.year);
    fprintf(database,"%-10d                               \n", game1.year);//writing down the result
        
    
    printf("if you wish to add more enter 0, if not 1\n");//checking if user wants to keep typing in the programs
    scanf("%d", &i);
    }
}

void getBorrowInfo(FILE *database)
{
    struct Borrow player;
    printf("enter name of the game\n");
    char gameName[20];
    fgets(gameName,20 , stdin);//getting name of the game which was borrowed
        if (strcmp(gameName,"\n")==0)
    fgets(gameName,20 , stdin);
    getstring(gameName, database);
    
        
        
        int count=0;
        char search[20];
    while (!feof(database))//looking for game name in the file
    {
        
        fscanf(database,"%s" ,search);//reading the name
        count++;
        
        if ( strstr(gameName,search))//when found writing person into the database
        {
            count/=4;//counting line number
            fseek(database,sizeof(struct game)*count, SEEK_SET);//finding courent coursor
            
            printf("enter name of the person\n");//entering data
            fgets(player.nameBrrow,20 , stdin);
            getstring(player.nameBrrow, database);//eliminating all spaces
            fprintf(database,"%-20s", player.nameBrrow);//printing the data in database

         
            
            printf("enter the day the game was borrowed\n");//entering data
            scanf("%d", &player.dayBorrow);
           fprintf(database,"%-5d", player.dayBorrow);//printing the data in database
            
            printf("enter the month the game was borrowed\n");//entering data
            scanf("%d", &player.monthBorrow);
            fprintf(database,"%-5d", player.monthBorrow);//printing the data in database
            
            printf("enter the year the game was borrowed\n");//entering data
            scanf("%d", &player.yearBorrow);
            fprintf(database,"%-5d\n", player.yearBorrow);//printing the data in database
            
            break;//braking if foud
        }

    }
    
    
}

void getstring(char *string,FILE *database)
{
    for (int i=0; i<strlen(string); i++)//cahnging all spases to _
        if (string[i]==' ')
            string[i]='_';
    
    long int i=strlen(string)-1;// changing the last symbot of the string to /0 by finding the last sybol in the string
    if(string[i] == '\n')
        string[i] = '\0';
    

}


