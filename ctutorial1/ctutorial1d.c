#include <stdio.h>
#include <string.h>

int main()
{
    int randomNum = 1;
    
    //+= adds number to itself
    
    printf("1 += 2 : %d\n\n", randomNum+=2);
    printf("%d +=2 : %d\n\n", randomNum, randomNum+=2);
    
    // -=, *=, /=, %=
    //++ increment by 1, -- decrement by 1
    
    int exNum=1;
    printf("++%d: %d\n\n", exNum, ++exNum);
    
    exNum=1;
    printf("%d++: %d\n\n", exNum, exNum++);
    
    printf("exNum is %d\n\n", exNum);
    
    return 0;
}