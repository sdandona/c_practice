#include <stdio.h>
#include <stdlib.h>

void pointerRandomNums(int* rand1, int* rand2) {
    *rand1 = rand() % 50 + 1;
    *rand2 = rand() % 50 + 1;
    
    printf("New rand1 is : %d\n\n", *rand1);
    printf("New rand2 is : %d\n\n", *rand2);
}

void main()
{
    int rand1=0, rand2=0;
    
    printf("Main before function call\n\n");
    
    printf("rand1=%d\n\n", rand1);
    printf("rand2=%d\n\n", rand2);
    
    pointerRandomNums(&rand1, &rand2);
    
    printf("Main after function call\n\n");
    
    printf("rand1=%d\n\n", rand1);
    printf("rand2=%d\n\n", rand2);
    
    printf("rand1add_dec=%d\n\n", &rand1);
    printf("rand2add_dec=%d\n\n", &rand2);
    
    printf("rand1_hex=%p\n\n", &rand1);
    printf("rand2_hex=%p\n\n", &rand2);
}