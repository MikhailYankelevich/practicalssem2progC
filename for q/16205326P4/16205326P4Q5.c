//
//  16205326P4Q5.c
//  Horce rases simulation.
//
//  Created by Mikhail Yankelevich on 22/02/2018.
//
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function prototypes
void moveNapoleon( int *NapoleonPtr);
void movePegasus( int *PegasusPtr);
void printCurrentPositions(unsigned int, unsigned int);

int main()
{
    srand(time(NULL));
    
    int Napoleon = 1; // Napoleon current position
    int Pegasus = 1; // Pegasus current position
    int counter = 0; // counter for the for loop controling the race.
    
    
    puts("The Race has started");
    
    // loop through the progress on the track
    while (Napoleon != 100 && Pegasus != 100)
    {
        //neither of the horses has reached the end of the track
        //call functions to move cars on the track
        moveNapoleon(&Napoleon);//moving N
        movePegasus(&Pegasus);//mooving P
        printCurrentPositions(Napoleon, Pegasus);//printing state
        counter++;//counting the number of iterations
        
    }
    
    // determine the winner and print message - one car has passed the end as it is outside the loop.
    if (Napoleon > Pegasus)
    {
        printf("Napoleon won\n"); //if napoleon won
    }
    
    else if (Napoleon < Pegasus)
    {
        printf("Pegasus won\n");// if pegasus won
    }
    else
    {
        printf("The Horses tied in this race\n");// if horses tied
    }
    
    printf("iterations: %u \n", counter);//printing out nuber of itterations
}

// progress for Pegasus
void movePegasus( int *PegasusPtr)
{
    int x=rand()%(10)+1;// generate random number from 1-10
    
    // determine progress
    if (x >= 1 && x <= 5)
    {
        
        // full speed 50% of the time
        *PegasusPtr += 3;
    }
    if (x >= 6 && x <= 8)//for 30% of moving +1
    {
        *PegasusPtr += 1;
    }
    if (x==10)//for 10 % moving -2
    {
        *PegasusPtr -= 2;
    }
    //for the last 10% without any movement no need to change *pagasusptr
    
    // check boundaries
    
    if (*PegasusPtr < 1)
    {
        *PegasusPtr = 1;
    }
    if (*PegasusPtr > 100)
    {
        *PegasusPtr = 100;
    }
}

// progress for Napoleon
void moveNapoleon( int *NapoleonPtr)
{
    int x=rand()%(10)+1;// generate random number from 1-10
    
    // determine progress
    if (x >= 1 && x <= 5)
    {
        
        // full speed 50% of the time
        *NapoleonPtr += 3;
    }
    if (x >= 6 && x <= 8)//for 30% of moving +1
    {
        *NapoleonPtr += 1;
    }
    if (x==10)//for 10 % moving -2
    {
        *NapoleonPtr -= 2;
    }
        //for the last 10% without any movement no need to change *Napoleonptr
    
    // check boundaries
    
    if (*NapoleonPtr < 1)
    {
        *NapoleonPtr = 1;
    }
    if (*NapoleonPtr > 100)
    {
        *NapoleonPtr = 100;
    }
}

// display new position
void printCurrentPositions(unsigned int Napoleon, unsigned int Pegasus)
{
    // loop through race
    for (unsigned int count = 1; count <= 100; ++count)
    {
        // this loop will print will 100 characters at each run: either P,N,T or a space to
        //give the user an idea of where the horse at every iteration
        
        if (count == Napoleon && count == Pegasus)
        {
            printf("T in position %d\n",count); //printing out if T
        }
        else if (count == Pegasus)
        {
            printf("P is leading in position %d\n",count);//printing out if p
        }
        else if (count == Napoleon) {
          printf("N is leading in position %d\n",count);  //printing out if N
        }
        
    }
}
