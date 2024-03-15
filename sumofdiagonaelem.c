#include <stdio.h>
int main()
{
int r,c,i,j,sum=0;
printf("Enter the number of rows in 2d array: ");
scanf("%d",&r);
printf("Enter the number of columns in 2d array: ");
scanf("%d",&c);
printf("Enter the elements in the 2d array: \n");
int arr[r][c];
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&arr[i][j]);
}
}
if(r==c)
{
for(i=0;i<r;i++)
{
sum+=arr[i][i];
}
printf("The sum of the diagonal element is = %d\n",sum);
}
else
{
printf("The entered matrix is not a square matrix therefore diagonal element does not exist.\n");
}
return 0;
}

