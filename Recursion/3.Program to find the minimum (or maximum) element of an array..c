#include<stdio.h>
int min(int a[],int n)
{
    if(n==1)
        return a[0];
    else
        return (a[n-1]<min(a,n-1))?a[n-1]:min(a,n-1);
}

int main()
{
    int a[100],n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The minimum element of the array is: %d",min(a,n));
    return 0;
}

