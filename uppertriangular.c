#include <stdio.h>
int main()
{
int i,j,row,col,sum=0;
printf("Enter the number of rows: ");
scanf("%d",&row);
printf("Enter the number of columns: ");
scanf("%d",&col);
if(row==col)
{
int arr[row][col];
printf("Enter the elements in the array :\n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
scanf("%d",&arr[i][j]);
}
}
for(i=0;i<row-1;i++)
{
for(j=i+1;j<col;j++)
{
sum+=arr[i][j];
}
}
printf("The given matrix is: \n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("%d\t",arr[i][j]);
}
printf("\n");
}
printf("Sum of upper triangular matrix = %d\n",sum);
}
else
{
printf("The given matrix is not square matrix\n");
}
return 0;
}

