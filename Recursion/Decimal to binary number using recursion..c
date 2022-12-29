#include<stdio.h>
#include<conio.h>

int dec_to_bin(int n)
{
    if(n==0)
        return 0;
    else
        return (n%2+10*dec_to_bin(n/2));
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Binary number is: %d",dec_to_bin(n));
    return 0;
}

