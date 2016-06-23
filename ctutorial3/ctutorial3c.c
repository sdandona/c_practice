#include <stdio.h>

//Needed for exit()
#include <stdlib.h>
#include <string.h>

int globalVar=0;

int addtwoints(int num1, int num2) {
    return num1+num2;
}

void changevariables() {
    int age = 40;
    printf("age inside of function = %d\n\n", age);
    
    globalVar=1000000;
    
    printf("globalVar inside of function = %d\n\n", globalVar);
}

void main()
{
    printf("\n");
    
    int total = addtwoints(4, 5);
    
    printf("The sume is %d\n\n", total);
    
    int age=10;
    
    globalVar=50;
    
    printf("age before a call to the function = %d\n\n", age);
    printf("globalVar before a call to the function = %d\n\n", 
        globalVar);
    
    changevariables();
    
    printf("age after a call to the function = %d\n\n", age);
    printf("globalVar after a call to the function = %d\n\n", 
        globalVar);
    
}