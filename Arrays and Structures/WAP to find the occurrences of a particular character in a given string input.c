#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
    char str[100]; 
    char temp;
    int i, len, count = 0; 
  
    printf("Enter a string: "); 
    gets(str); 
    printf("Enter the character to be found : ");
    scanf("%c",&temp);
    len = strlen(str); 
  
    for (i = 0; i < len; i++) { 
        if (str[i] == temp) 
            count++; 
    } 
    
    printf("Occurrences of %c in %s = %d",temp, str, count); 
  
    return 0; 
}