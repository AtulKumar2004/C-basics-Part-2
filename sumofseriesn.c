/*
#include <stdio.h>
#include <math.h>
int main()
{
int i,j,x,n,fact;
double power,sum=0.0;
printf("Enter the value of x and n: ");
scanf("%d%d",&x,&n);
for(i=0;i<=n;i+=2)
{
power=pow(x,i);
fact=1;
for(j=1;j<=i;j++)
{
fact*=j;
}
sum+=(power/fact);
}
printf("%lf\n",sum);
}
*/

/*
#include <stdio.h>
#include <math.h>
int main()
{
int i=0,j,x,n,fact;
double power,sum=0.0;
printf("Enter the value of x and n: ");
scanf("%d%d",&x,&n);
while(i<=n)
{
power=pow(x,i);
fact=1;
j=1;
while(j<=i)
{
fact*=j;
j++;
}
sum+=(power/fact);
i+=2;
}
printf("%lf\n",sum);
}
*/

#include <stdio.h>
#include <math.h>
int main()
{
int i=0,j,x,n,fact;
double power,sum=0.0;
printf("Enter the value of x and n: ");
scanf("%d%d",&x,&n);
do
{
power=pow(x,i);
fact=1;
j=1;
do
{
fact*=j;
j++;
}
while(j<=i);
sum+=(power/fact);
i+=2;
}
while(i<=n);
printf("%lf\n",sum);
}

