#include <stdio.h>
#include <string.h>

#define MYNAME "Sangeet Dandona";

int globalVar = 100;

int main()
{
    char middleInitial;
    
    printf("What is your middle intial? ");
    
    scanf(" %c", &middleInitial);
    
    char firstName[30], lastName[30];
    
    printf("What is your name? ");
    
    scanf(" %s %s", firstName, lastName);
    
    printf("My name is %s %c %s\n\n", firstName, middleInitial, lastName);
    
    int month, day, year;
    
    printf("What is your birthday? ");
    
    scanf(" %d/%d/%d\n\n", &month, &day, &year);
    
    return 0;
    
}

