#include <stdio.h>
int main()
{
int r,c,i,j;
printf("Enter the number of rows in 2d array: ");
scanf("%d",&r);
printf("Enter the number of columns in 2d array: ");
scanf("%d",&c);
printf("Enter the elements in the 2d array: \n");
int arr[r][c];
int transpose[c][r];
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&arr[i][j]);
}
}
printf("The given matrix is: \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",arr[i][j]);
}
printf("\n");
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
transpose[j][i]=arr[i][j];
}
}
printf("Transpose of the given matrix:\n");
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
printf("%d\t",transpose[i][j]);
}
printf("\n");
}
return 0;
}

