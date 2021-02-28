#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    char str[30], *strPtr;
    strPtr = str;
   
    strPtr = "Something is wrong with the pointers";
    printf("Hellow world: %p : %c\n", strPtr, *strPtr);
    
    
    return 0;

}