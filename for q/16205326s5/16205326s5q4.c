/* Obtain the Public's Opinion on topics */
#include <stdio.h>

#define ISSUES 5
#define RATINGS 10

// function prototypes
void recordResponse (int i, int response);  //^^implement this
void highestRatings (void);
void lowestRatings (void); //^^implement this
void displayResults (void);
double averageResult (int i);


int responses[ISSUES][RATINGS]; // Two-dimensional array of poll-ratings
const char *topics[ISSUES] = {"Topic 1", "Topic 2", "Topic 3",
    "Topic 4", "Topic 5"}; // array of opinion topics

int main (void)
{
    int response; // the user's responses
    
    // Administer the poll.
    do {
        int j;
        for (int i=0; i<ISSUES; i++)
        {
            printf("Enter your opinion about %s from 1 to 10 \n", *(topics+i));// ^^ Ask the user to rate the 5 topics in the topics array (for loop) remeber to check for for valid entries and record the response.
            scanf("%d", &j);
            if (j<1||j>10)//checking if entered value is correct
            {
                printf("plese enter value from 1 to 10\n");
                i--;//if not repeating the cicle
            }
            else
                j--;
                recordResponse(i, j);//if yes, recording the responce
            
        }
        
        printf("%s", "Enter 1 to stop or 0 to allow a new person to rate the issues again: "); // Ask if the user wants to stop
        scanf("%d", &response); // get the user's response
    } while(response != 1);
    
    displayResults();
}

                                     
                                     
                                     
// Records the user's response to a topic located at index i
void recordResponse(int issue, int rating)
{
   responses[issue][rating]++;  //^^ record the responses by updating the responses array
    
} // end recordResponse




// get the highest rated topic (highest point total)
void highestRatings(void)
{
    int highRating = 0;
    int highTopic = 0;
    
    for (unsigned int i = 0; i < ISSUES ; i++) {
        int topicRating = 0;
        
        for (unsigned int j = 0; j < RATINGS ; j++) {
            topicRating += responses[i][j]*(j+1);//calculating the total rating of the certain responce
        }
        
        if (highRating < topicRating) {
            highRating = topicRating;
            highTopic = i;// index of the highest rated topic
        }
    }
    
    printf("The highest rated topic was %s with a total rating of %d\n", topics[highTopic], highRating);//printing out the highest topic
}

                                     
                                     
                                     
                                     
                                     
// get the lowest rated topic (lowest point total)
void lowestRatings(void)
{
    int lowRating = 10;
    int lowTopic = 5;
    
    for (unsigned int i = 0; i < ISSUES ; i++) {
        int topicRating = 0;
        
        for (unsigned int j = 0; j < RATINGS ; j++) {
            topicRating += responses[i][j]*(j+1);//calculating the total rating of the certain responce
        }
        
        if (lowRating > topicRating) {
            lowRating = topicRating;
            lowTopic = i;// index of the lowest rated topic
        }//^^ implement this
}

printf("The lowest rated topic was %s with a total rating of %d\n", topics[lowTopic], lowRating);//printing out the lowest rating topic
}



                                     
                                     
                                     
                                     
// Output in tabular form the number of ratings per issue
void displayResults(void)
{
    // Output table header
    printf("%20s\t\t\t\t\t", "Topic");
    for (unsigned int i = 1; i <= RATINGS; ++i)
    {
        printf("%4d", i);
    }
    printf("\t\t%s", "Average Rating\n");
    
    //output table contence
    for (int i=0; i<ISSUES; i++)
    {
        printf("%20s\t\t\t\t\t", topics[i]);//printing out topic name
        for (int j=0; j<RATINGS; j++)
        {
            printf("%4d",responses[i][j]);//printing out number of responces for each rating
        }
        printf("\t\t\t\t%.2f\n", averageResult(i));//printing out the average responce
    }
    // Output the highest and lowest ratings for this poll
    highestRatings();
    lowestRatings();
}


double averageResult(int i)//this function calculates the average of a certain topic, getting the number of the topiv in the array
{
    double sum=0;//intit sum
    double people=0;//innit number of people
        for (int j=0; j<RATINGS; j++)
        {
            if (responses[i][j]!=0)
            {
                sum+=responses[i][j]*(j+1);//calculating the sum
                people+=responses[i][j];//calculating the number of people
            }
        }
    return sum/people;//returning the average
}

