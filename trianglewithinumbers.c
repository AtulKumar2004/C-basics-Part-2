/*
#include <stdio.h>
int main()
{
int i,j,n=5;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
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
int i=1,j,n=5;
while(i<=n)
{
j=1;
while(j<=i)
{
printf("%d",i);
j++;
}
printf("\n");
i++;
}
}
*/

#include <stdio.h>
int main()
{
int i=1,j,n=5;
do
{
j=1;
do
{
printf("%d",i);
j++;
}
while(j<=i);
printf("\n");
i++;
}
while(i<=n);
}

