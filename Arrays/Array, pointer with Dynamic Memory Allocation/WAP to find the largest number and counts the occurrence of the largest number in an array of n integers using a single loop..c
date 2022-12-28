#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
// 5
// 1 7 2 7 3
// Largest: 7, Occurrence: 2
int main()
{
int n;
scanf("%d", &n);
int *a = malloc(n * sizeof(int));
int max = INT_MIN, cnt = 0;
for (int i = 0; i < n; i++)
{
scanf("%d", &a[i]);
if (a[i] == max)
{
cnt++;
}
else if (a[i] > max)
{
cnt = 1;
max = a[i];
}
}
printf("Largest: %d, Occurrence: %d", max, cnt);
return 0;
}
