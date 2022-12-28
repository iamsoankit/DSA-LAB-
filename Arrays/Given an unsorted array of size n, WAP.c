//Given an unsorted array of size n, WAP to find number of elements between two elements a and b (both inclusive). Input : arr = [1, 2, 2, 7, 5, 4], a=2 and b=5 Output : 4 (The numbers are: 2, 2, 5, 4) If a=6 b=15, then output will be 0

#include<stdio.h>
int main()
{
    int arr[100],i,n,a,b,count=0;
    printf("Enter the size of array");

    scanf("%d",&n);
    printf("Enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the value of a and b");

    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            count++;
        }
    }
    printf("The number of elements between a and b is %d",count);

    return 0;
}

