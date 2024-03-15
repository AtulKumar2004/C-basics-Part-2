#include <stdio.h>
int main()
{
int r1,c1,r2,c2,i,j;
printf("Enter the number of rows for first matrix: ");
scanf("%d",&r1);
printf("Enter the number of columns for first matrix: ");
scanf("%d",&c1);
printf("Enter the number of rows for second matrix: ");
scanf("%d",&r2);
printf("Enter the number of columns for second matrix: ");
scanf("%d",&c2);
if(r1==r2 && c1==c2)
{
double arr1[r1][c1];
double arr2[r2][c2];
double sum[r1][c1];
printf("Enter the elements for the first matrix: \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%lf",&arr1[i][j]);
}
}
printf("Enter the elements for the second matrix: \n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%lf",&arr2[i][j]);
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
sum[i][j]=arr1[i][j]+arr2[i][j];
}
}
printf("Sum of matrix :\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%1.3lf\t",sum[i][j]);
}
printf("\n");
}
}
else
{
printf("The sum of 2d arrays cannot be found\n");
}
return 0;
}
