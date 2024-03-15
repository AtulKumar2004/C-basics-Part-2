/*
#include <stdio.h>
int main()
{
int i,j;
printf("Enter row number: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("%d",i);
}
printf("\n");
}
}
*/

/*
#include <stdio.h>
int main()
{
int i=1,j=1;
printf("Enter row number: ");
scanf("%d",&n);
while(i<=n)
{
j=1;
while(j<=n)
{
printf("%d",i);
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
int i=1,j=1,n;
printf("Enter row number: ");
scanf("%d",&n);
do{
j=1;
do{
printf("%d",i);
j++;
}
while(j<=n);
i++;
printf("\n");
}
while(i<=n);
}

