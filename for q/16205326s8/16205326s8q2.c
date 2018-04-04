//
//  16205326s8q2.c
//  for q
//
//  Created by Mikhail Yankelevich on 03/04/2018.
// 
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct county{
    char *longName;
    char *shortName;
    unsigned int population;
};
struct town{
    char *name;
    unsigned int population;
    struct county aCounty;
};

void getTown(FILE *town,FILE *county);
void getCounty(FILE *county, struct county c);


int main(void)
{
    FILE *town;
    FILE *county;
    town=  fopen("/Users/macbook/Downloads/towns.txt", "r");
    
    county= fopen("/Users/macbook/Downloads/counties.txt", "r");
    printf ("%-15s     %-15s      %-10s  %-15s     %-10s      %-10s\n\n", "Town Name", "County","Town Pop.", "County", "Short name", "County pop."   );
    getTown(town, county);
    
    return 0;
}


void getTown(FILE *town, FILE *county)
{
    struct town t;
    
    char acounty[15];
    char name[15];
    

    while(!feof(town))
    {
        fscanf(town,"%s%u%s", name, &t.population, acounty);

        t.name=name;
        t.aCounty.longName= acounty ;
        
        printf ("%-15s     %-15s      %-10u  ", t.name, t.aCounty.longName, t.population);
        
        
        getCounty(county, t.aCounty );
    }
}

void getCounty (FILE *county, struct county c)
{
    char longName[15];
    char shortName[5];
    fseek( county, 0, SEEK_SET );
    while(!feof(county))
    {
         fscanf(county,"%s%s%u", longName,shortName, &c.population);\
        if (!strcmp(longName, c.longName))
        {
            c.shortName= shortName;
            printf ("%-15s     %-10s      %-10u\n", c.longName,c.shortName, c.population);
            break;
            
        }
    }
    
}
