//
//  q6_02_02_18.c
//
//  the program gets 2 random dice vales and makes a max. number and then compares second throw to it
//  Created by Mikhail Yankelevich 16205326 on 08/02/2018.
//  Copyright © 2018 Mikhail Yankelevich. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int check(int prev_numb, int numb);

int main(void)
{
    int prev_numb;
    srand(time(NULL));//setting a true randomizer
    
    
    int dice1=1+rand()%6;//randomizing each dice
    int dice2=1+rand()%6;
    if (dice1>dice2)//counting a max number( checking which dice is larger at fist, then turning in 2 digit number
        prev_numb=dice1*10+dice2;
    else
        prev_numb=dice2*10+dice1;
    printf("number to beat %d \n", prev_numb);// printing out the number to beat
    
    
    int ch=check(1,1);// setting an initial check which will be equal to 2
    
    
    while (ch==2)// while check== 2 contenew a game
    {
        int newdice1=1+rand()%6;//counting dices for throw to compare
        int newdice2=1+rand()%6;
        int numb;
        if (newdice1>newdice2)//turning it into highest number
            numb=newdice1*10+newdice2;
        else
            numb=newdice2*10+newdice1;
        ch=check(prev_numb, numb);//checking the state of the game
        printf ("throw-%d ",numb);//printing out the stste of the game
        if (ch==2)//printing out the state of the game (1-win,0-lose,2-even)
            printf("Game status: Continue\n");
        else if (ch==1)
            printf("game ststus: Win\n");
        else
            printf("game status: Lose\n");
    }
    
}



int check(int prev_numb, int numb)//checking the state of the game
{
    if (prev_numb==numb)//if numbers are == returning 2
        return 2;
    if(prev_numb<numb)//if number is higher ,then previous one, then return 1
        return 1;
    return 0;//else return 0 (only possible when number is smaller then previous)
}
