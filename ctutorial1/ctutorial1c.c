#include <stdio.h>
#include <string.h>

#define MYNAME "Sangeet Dandona";

int globalVar = 100;

int main()
{
    int num1=12, num2=15, numAns;
    float dec1=1.2, dec2=1.5, decAns;
    
    printf("Integer Calculation %d\n\n", num2/num1);
    
    printf("Float calculation %f\n\n", dec2/dec1);
    
    printf("Modular %d\n\n", num2%num1);
    
    printf("Without parentheses %d\n\n", 3+6*10);
    
    printf("With paranetheses %d\n\n", (3+6)*10);
    
    return(0);
    
}