//WAP to print all permutations of a given string using pointers

#include<stdio.h>
#include<string.h>

void swap(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char *a, int l, int r)
{
    int i;
    if(l == r)
        printf("%s", a);
    else

    {
        for(i = l; i <= r; i++)
        {
            swap((a+l), (a+i));
            permute(a, l+1, r);
            swap((a+l), (a+i));
        }
    }

}

int main()
{
    char str[20];
    printf("Enter a string: ");
    scanf("%s", str);
    int n = strlen(str);
    permute(str, 0, n-1);
    return 0;
}
