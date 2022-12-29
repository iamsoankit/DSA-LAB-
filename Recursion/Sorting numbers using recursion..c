#include<stdio.h>
#include<conio.h>

void sort(int a[],int n)
{
  int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
    }

}

void main()
{
    int a[10],i,n;
    clrscr();
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("The sorted array is:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    getch();
}


