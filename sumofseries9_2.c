/*
#include <stdio.h>
#include <math.h>
int main()
{
int i,n;
double power,sum=0.0;
printf("Enter the value of n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
power=pow(i,0.5);
sum+=power;
}
printf("The sum of series is = %lf\n",sum);
}
*/

/*
#include <stdio.h>
#include <math.h>
int main()
{
int i=1,n;
double power,sum=0.0;
printf("Enter the value of n: ");
scanf("%d",&n);
while(i<=n)
{
power=pow(i,0.5);
sum+=power;
i++;
}
printf("The sum of series is = %lf\n",sum);
}
*/

#include <stdio.h>
#include <math.h>
int main()
{
int i=1,n;
double power,sum=0.0;
printf("Enter the value of n: ");
scanf("%d",&n);
do
{
power=pow(i,0.5);
sum+=power;
i++;
}
while(i<=n);
printf("The sum of series is = %lf\n",sum);
}

