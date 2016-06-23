#include <stdio.h>
#include <stdlib.h>

void main() 
{
    
    int rand1 = 12, rand2 = 15;
    
    printf("rand1=%p : rand2=%p\n\n", &rand1, &rand2);
    printf("rand1=%d : rand2=%d\n\n", &rand1, &rand2);
    
    printf("Size of int %d\n\n", sizeof(rand1));
    
    int * pRand1 = &rand1; //pointer pointing to address of data in
                           //in menory
    
    printf("Pointer %p\n\n", pRand1);
    printf("Pointer %d\n\n", pRand1);
    
    printf("Value %d\n\n", *pRand1);
    
}
