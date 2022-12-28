//WAP to search an element in an array of n numbers
#include<stdio.h>
int main()
{
int a[100],i,n,search;

printf("Enter the number of elements in the array

");

scanf("%d",&n);

printf("Enter the elements of the array);

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("Enter the element to be searched");

scanf("%d",&search);

for(i=0;i<n;i++)
{
if(a[i]==search)
{
printf("Element found at position %d",i+1);
break;
}
}

if(i==n)
printf("Element not found");

return 0;
}

