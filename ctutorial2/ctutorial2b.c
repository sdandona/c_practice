#include <stdio.h>

int main()
{
    printf("\n");
    
    /*
    && : AND
    || : OR
    ^:  XOR
    ! : NOT/INVERT
    */
    
    int custAge = 38;
    
    if(custAge>21 && custAge<35) printf("Welcome Sir\n\n");
    else printf("GET OUTTA HERE\n\n");
    
    printf("! turns a true into a false : %d\n\n", !1);
    
    //Missed less then 10 days work AND
    //Has over 30000 OR
    //Signed up more then 30 new customers
    
    int bobMissedDays=8, bobTotalSales=24000, bobNewCust=29;
    
    if (bobMissedDays<=10 && bobTotalSales>=30000 || 
        bobNewCust>=30) printf("GOOD JOB!!\n\n");
    else printf("JETSON, YOU'RE FIRED!!\n\n");
    
    return 0;
}