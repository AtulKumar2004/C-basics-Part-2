/*
#include <stdio.h>
int main()
{
int i,j,n,sum=0;
printf("Enter the value of n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
sum+=j;
}
}
printf("%d\n",sum);
}
*/

/*
#include <stdio.h>
int main()
{
int i=1,j,n,sum=0;
printf("Enter the value of n: ");
scanf("%d",&n);
while(i<=n)
{
j=1;
while(j<=i)
{
sum+=j;
j++;
}
i++;
}
printf("%d\n",sum);
}
*/


#include <stdio.h>
int main()
{
int i=1,j,n,sum=0;
printf("Enter the value of n: ");
scanf("%d",&n);
do
{
j=1;
do
{
sum+=j;
j++;
}
while(j<=i);
i++;
}
while(i<=n);
printf("%d\n",sum);
}

