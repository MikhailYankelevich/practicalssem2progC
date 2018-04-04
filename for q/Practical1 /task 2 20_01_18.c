//
//  task 2 20_01_18.c
//
// chackiking if an appartment is overcrowded, which means that there are more than two peple in one room 
//  Created by Mikhail Yankelevich on 30/01/2018.
//
//

#include <stdio.h>
int overCrowded( int rooms, int people);// intitializing all functions


int main(void)
{
    printf("%d\n", overCrowded (4,8));// printing the result if an appartment is overcrowded
    return 0;
}

int overCrowded(int rooms, int people)// calcuating if the appartment is overcrowded, using number of rooms and number of people
{
    if ((people - 2*rooms)>0) {return 1;}// checking if number of people is more then doubled number of the rooms ( MORE THEN 2 PEOPLE PER ROOM )
    else {return 0;};
}
