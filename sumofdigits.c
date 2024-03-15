/*
#include <stdio.h>
int main()
{
int i,ld,n,sum=0;
printf("Enter a number: ");
scanf("%d",&n);
for(i=n;i>0;i/=10)
{
ld=i%10;
sum+=ld;
}
printf("The sum of digits of %d is %d\n",n,sum);
}
*/

/*
#include <stdio.h>
int main()
{
int ld,n,num,sum=0;
printf("Enter a number: ");
scanf("%d",&n);
num=n;
while(n>0)
{
ld=n%10;
sum+=ld;
n/=10;
}
printf("The sum of digits of %d is %d\n",num,sum);
}
*/

#include <stdio.h>
int main()
{
int ld,n,num,sum=0;
printf("Enter a number: ");
scanf("%d",&n);
num=n;
do
{
ld=n%10;
sum+=ld;
n/=10;
}
while(n>0);
printf("The sum of digits of %d is %d\n",num,sum);
}
