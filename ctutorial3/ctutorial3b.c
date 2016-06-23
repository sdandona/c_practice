#include <stdio.h>

//Needed for exit()
#include <stdlib.h>
#include <string.h>

void main()
{
    printf("\n");
    
    char wholename[12] = "Derek Banas";
    
    int primenumbers[3] = {2, 3, 5};
    int moreprime[] = {13, 17, 19, 23};
    
    printf("The first prime in the list is %d\n\n",
        primenumbers[0]);
        
    char city[7] = {'C', 'h', 'i', '\0'};
    
    char thirdcity[]="Paris";
    
    char yourcity[30];
    
    printf("What city do you live in? ");
    
    //fgets : adds \0 and need to provide size
    
    fgets(yourcity, 30, stdin);
    
    printf("Hello %s\n\n", yourcity);
    
    for(int i=0; i<30; i++) {
        
        if(yourcity[i] == '\n') {
            
            yourcity[i] = '\0';
            break;
        }
    }
    
    printf("Hello %s\n\n", yourcity);
    
    printf("Is your city Paris? %d\n\n", 
        strcmp(yourcity, thirdcity));
        
    char yourstate[]=", California";
    
    strcat(yourcity, yourstate);
    printf("You live in %s\n\n", yourcity);
    
    printf("Letters in Paris : %d\n\n", strlen(thirdcity));
    
    /*strlcpy(yourcity, 
        "El Pueblo del la Reina de Los Angeles", sizeof(yourcity));
    printf("New city is %s\n\n", yourcity);
    */
    
}