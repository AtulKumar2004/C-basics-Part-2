/*
#include <stdio.h>
int main()
{
int i;
int sum=0,store;
float avg=0.0f;
printf("Enter 10 numbers: ");
for(i=1;i<=10;i++)
{
scanf("%d",&store);
sum+=store;
}
avg=sum/10.0f;
printf("The sum is = %d\n",sum);
printf("The average is = %f\n",avg);
}
*/

/*
#include <stdio.h>
int main()
{
int i=1;
int sum=0,store;
float avg=0.0f;
printf("Enter 10 numbers: ");
while(i<=10)
{
scanf("%d",&store);
sum+=store;
i++;
}
avg=sum/10.0f;
printf("The sum is = %d\n",sum);
printf("The average is = %f\n",avg);
}
*/

#include <stdio.h>
int main()
{
int i=1;
int sum=0,store;
float avg=0.0f;
printf("Enter 10 numbers: ");
do
{
scanf("%d",&store);
sum+=store;
i++;
}
while(i<=10);
avg=sum/10.0f;
printf("The  sum is = %d\n",sum);
printf("The average is = %f\n",avg);
}
