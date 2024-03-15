/*
#include <stdio.h>
int main()
{
int i=1,n,a=0,b=1,c=1;
printf("Enter the value of n: ");
scanf("%d",&n);
while(i<=n)
{
i++;
printf("%d %d %d ",a,b,c);
a=a+b+c;
b=a+b+c;
c=a+b+c;
}
printf("\n");
}
*/

/*
#include <stdio.h>
int main()
{
int i,n,a=0,b=1,c=1;
printf("Enter the value of n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d %d %d ",a,b,c);
a=a+b+c;
b=a+b+c;
c=a+b+c;
}
printf("\n");
}
*/

#include <stdio.h>
int main()
{
int i=1,n,a=0,b=1,c=1;
printf("Enter the value of n: ");
scanf("%d",&n);
do
{
i++;
printf("%d %d %d ",a,b,c);
a=a+b+c;
b=a+b+c;
c=a+b+c;
}
while(i<=n);
printf("\n");
}

