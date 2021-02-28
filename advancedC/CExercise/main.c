#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void syntax_error(int num)
{
    static char *err[] ={
        "print error\n", "syntax error\n", "IO file error\n"
    };
    printf("%s", err[num]);
}
void putstr(char *s)
{
    double **newbalance;
    double price[10]={10.30,1.2,1.1};
    //newbalance = price;
    register int t = 0;
    int x =100;
    for(; x; t++)
    {
        putchar(*(s+t));
        printf("%fl: \n", (price[2]));
        x=0;
        syntax_error(1);
    }
}
int main()
{
    char str[30], *strPtr;
    strPtr = str;
   
    strPtr = "Something is wrong with the pointers";
     putstr(strPtr);
    printf("Hellow world: %p : %c\n", strPtr, *strPtr);
    
    
    return 0;

}