//WAP to arrange the elements of an array such that all evennumbers are followed by all odd numbers using a single loop

#include<stdio.h>
int main()
{
int a[10],i,j,n,temp;
printf("Enter the size of array");
scanf("%d",&n);

printf("Enter the elements of array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]%2==0 && a[j]%2!=0)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}

printf("The array after sorting is");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}

