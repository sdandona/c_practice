#include <stdio.h>

int main()
{
    printf("\n");
    
    //int secretNum=10, numGuess=0;
    
   /* while(1) {
        
        printf("Guess my secrety number:");
        scanf(" %d", &numGuess);
        
        if (numGuess == secretNum) {
            printf("YOU GOT IT!!\n\n");
            break;
        }
    }*/
    
    char sizeOfShirt;
    
    do {
        
        printf("What size shirt (S, M, L): ");
        scanf(" %c", &sizeOfShirt);
        
    } while(sizeOfShirt!='S' && sizeOfShirt!='M' && sizeOfShirt!='L');
    
    return 0;
}
