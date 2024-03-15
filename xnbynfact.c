/*
#include <stdio.h>
#include <math.h>
int main()
{
int i,x,n,fact=1;
double power;
printf("Enter the value of x and n: ");
scanf("%d%d",&x,&n);
power=pow(x,n);
for(i=1;i<=n;i++)
{
fact*=i;
}
printf("The value is: %1.3lf\n",power/fact);
}
*/

/*
#include <stdio.h>
#include <math.h>
int main()
{
int i=1,x,n,fact=1;
double power;
printf("Enter the value of x and n: ");
scanf("%d%d",&x,&n);
power=pow(x,n);
while(i<=n)
{
fact*=i;
i++;
}
printf("The value is: %1.3lf\n",power/fact);
}
*/

#include <stdio.h>
#include <math.h>
int main()
{
int i=1,x,n,fact=1;
double power;
printf("Enter the value of x and n: ");
scanf("%d%d",&x,&n);
power=pow(x,n);
do
{
fact*=i;
i++;
}
while(i<=n);
printf("The value is: %1.3lf\n",power/fact);
}
