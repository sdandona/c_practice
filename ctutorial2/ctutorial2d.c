#include <stdio.h>

int main()
{
    printf("\n");
    
    printf("A char takes up %d bytes\n\n", sizeof(char));
    printf("A int takes up %d bytes\n\n", sizeof(int));
    printf("A long int takes up %d bytes\n\n", sizeof(long int));
    printf("A float takes up %d bytes\n\n", sizeof(float));
    printf("A double takes up %d bytes\n\n", sizeof(double));
    
    int bigInt = 2147483648;
    
    printf("I'm bigger then you may have heard %d\n\n", bigInt);
    
    int numberHowBig=0;
    
    printf("How many bits?");
    scanf("%d", &numberHowBig);
    printf("\n");
    
    //0 : Print what is given
    //1 : Print what is given
    //2 : 1+2=3 or 11
    //3 : 3+4=7 or 111
    //4 : 7+8=15 or 1111
    
    int myInc = 1, myMult = 1, finalVal=1;
    
    while(myInc<numberHowBig) {
        myMult *= 2;
        finalVal = finalVal + myMult;
        myInc++;
        
    }
    
    if((numberHowBig == 0) || (numberHowBig == 1)) {
        printf("Top Value: %d\n\n", numberHowBig);
    } else {
        printf("Top Value: %d\n\n", finalVal);
    }
    
    return 0;
}