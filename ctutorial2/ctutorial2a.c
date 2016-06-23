#include <stdio.h>

int main()
{
    int num1=1, num2=2;
    
    printf("Is num2 less then num1:%d\n\n", num2 < num1);
    
    if (num2<num1) {
        printf("%d is less then %d\n\n", num2, num1);
    } else if(num2>num1) {
        printf("%d is greater then %d\n\n", num2, num1);
    } else {
        printf("The values are equal");
    }
    
    return 0;
}

