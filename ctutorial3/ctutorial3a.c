#include <stdio.h>
#include <stdlib.h>

//Needed for exit()
void main()
{
    int whattodo=0;
    
    do {
        printf("\n");
        printf("1. What time is it?\n");
        printf("2. What is today's date?\n");
        printf("3. What day is it?\n");
        printf("4. Quit\n");
        
        scanf(" %d", &whattodo);
    } while(whattodo<1 || whattodo>4);
    
   /* if (whattodo==1){
        printf("Print the time\n");
    } else if(whattodo==2) {
        printf("Print the date\n");
    } else if(whattodo==3) {
        printf("Print the day\n");
    } else {
        printf("BYE BYE\n");
        exit(0);
    } */
    
    switch(whattodo) {
        case(1) : printf("Print the time");
                    break;
                    
        case(2) : printf("Print the date");
                    break;
                    
        case(3) : printf("Print the day");
                    break;
                    
        default : printf("BYE BYE");
                    exit(0);
                    break;
    }
}
