/*
#include <stdio.h>
int main()
{
int n,i,term=1;
printf("Enter the value of n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d ",term);
term=(term*2)+1;
}
printf("\n");
}
*/

/*
#include <stdio.h>
int main()
{
int n,i=1,term=1;
printf("Enter the value of n: ");
scanf("%d",&n);
while(i<=n)
{
printf("%d ",term);
term=(term*2)+1;
i++;
}
printf("\n");
}
*/

#include <stdio.h>
int main()
{
int n,i=1,term=1;
printf("Enter the value of n: ");
scanf("%d",&n);
do
{
printf("%d ",term);
term=(term*2)+1;
i++;
}
while(i<=n);
printf("\n");
}
