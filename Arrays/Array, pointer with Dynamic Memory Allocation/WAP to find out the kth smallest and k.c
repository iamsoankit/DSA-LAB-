//WAP to find out the kth smallest and kth largest element stored in a dynamic array of n integers, where k<n.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n, k, i, j, temp;
    int *arr;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    arr = (int *)malloc(n*sizeof(int));
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The %dth smallest element is %d", k, arr[k-1]);

    printf("The %dth largest element is %d", k, arr[n-k]);

    return 0;

}

