/*
#include <stdio.h>
#include <math.h>
int main()
{
int n,i;
double power,sum=0.0;
printf("Enter the value of n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
power=pow(i,i);
sum+=power;
}
printf("The sum of series is = %1.1lf\n",sum);
}
*/

/*
#include <stdio.h>
#include <math.h>
int main()
{
int n,i=1;
double power,sum=0.0;
printf("Enter the value of n: ");
scanf("%d",&n);
while(i<=n)
{
power=pow(i,i);
sum+=power;
i++;
}
printf("The sum of series is = %1.1lf\n",sum);
}
*/

#include <stdio.h>
#include <math.h>
int main()
{
int n,i=1;
double power,sum=0.0;
printf("Enter the value of n: ");
scanf("%d",&n);
do
{
power=pow(i,i);
sum+=power;
i++;
}
while(i<=n);
printf("The sum of series is = %1.1lf\n",sum);
}

