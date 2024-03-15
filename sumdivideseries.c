/*
#include <stdio.h>
int main()
{
int i,n;
double sum=0.0;
printf("Enter the range: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+1.0/i;
}
printf("The sum of series is = %lf\n",sum);
}
*/

/*
#include <stdio.h>
int main()
{
int i=1,n;
double sum=0.0;
printf("Enter the range: ");
scanf("%d",&n);
while(i<=n)
{
sum=sum+1.0/i;
i++;
}
printf("The sum of series is = %lf\n",sum);
}
*/

#include <stdio.h>
int main()
{
int i=1,n;
double sum=0.0;
printf("Enter the range: ");
scanf("%d",&n);
do
{
sum=sum+1.0/i;
i++;
}
while(i<=n);
printf("The sum of series is = %lf\n",sum);
}
