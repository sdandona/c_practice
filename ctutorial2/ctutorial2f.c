#include <stdio.h>

void main()
{
    printf("\n");
    
    //for(define incrementor;define condition;increment)
    
    for(int counter=0; counter<=40; counter++) {
        if((counter%2)==0) continue; //means skip next increment
        printf("%d\n", counter);
    }
    
}