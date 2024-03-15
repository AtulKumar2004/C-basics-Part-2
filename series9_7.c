/*
#include <stdio.h>
int main()
{
int n,i,j;
printf("Enter the value of n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
}
*/

/*
#include <stdio.h>
int main()
{
int n,i=1,j;
printf("Enter the value of n:");
scanf("%d",&n);
while(i<=n)
{
j=1;
while(j<=i)
{
printf("*");
j++;
}
i++;
printf("\n");
}
}
*/

#include <stdio.h>
int main()
{
int n,i=1,j;
printf("Enter the value of n:");
scanf("%d",&n);
do
{
j=1;
do
{
printf("*");
j++;
}
while(j<=i);
i++;
printf("\n");
}
while(i<=n);
}
