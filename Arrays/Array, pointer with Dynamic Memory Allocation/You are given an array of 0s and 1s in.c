//You are given an array of 0s and 1s in random order.Segregate 0s on left side and 1s on right side of the array. Traverse array only once.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int i=0,j=n-1;
    while(i<j)
    {
        if(a[i]==1 && a[j]==0)
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
        else if(a[i]==0 && a[j]==1)
        {
            i++;
            j--;
        }
        else if(a[i]==0 && a[j]==0)
        {
            i++;
        }
        else if(a[i]==1 && a[j]==1)
        {
            j--;
        }
    }
    printf("The segregated array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

