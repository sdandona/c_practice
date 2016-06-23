#include <stdio.h>

int main()
{
    printf("\n");
    
    int custAge=38;
    
    //character array, conditional operator
    char* legalAge = (custAge >21 ) ? "true" : "false";
    
    printf("Is the customer of legal age? %s\n\n", legalAge);
    
    int numofproducts=10;
    printf("I bought %s products\n\n", 
        (numofproducts>1) ? "many" : "one");
    
    return 0;
    
}