//Write a Program for length of a string using recursion

#include<stdio.h>
int length(char *str)
{
    if(*str=='\0')
        return 0;
    else
        return 1+length(str+1);
}   

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("Length of string is %d",length(str));
    return 0;
}

