#include <stdio.h>
#include <stdlib.h>

void main()
{
    int primenumbers[]={2, 3, 5, 7};
    
    printf("First index : %d\n\n", primenumbers[0]);
    
    printf("First index : %d\n\n", *(primenumbers+1));
}