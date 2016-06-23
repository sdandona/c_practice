#include <stdio.h>
#include <stdlib.h>

void main()
{
    char * students[4]={"Sally", "Mark", "Paul", "Sue"};
    
    for(int i; i<4;i++) {
        printf("%s : %d\n\n", students[i], &students[1]);
    }
}