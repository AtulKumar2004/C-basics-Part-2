/*
#include <stdio.h>
int main()
{
int i,j,n;
printf("Enter row number: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}
}
*/

/*
#include <stdio.h>
int main()
{
int i=1,j,n;
printf("Enter row number: ");
scanf("%d",&n);
while(i<=n)
{
j=1;
while(j<=i)
{
printf("%d",j);
j++;
}
printf("\n");
i++;
}
}
*/

#include <stdio.h>
int main()
{
int i=1,j,n;
printf("Enter row number: ");
scanf("%d",&n);
do
{
j=1;
do
{
printf("%d",j);
j++;
}
while(j<=i);
printf("\n");
i++;
}
while(i<=n);
}

