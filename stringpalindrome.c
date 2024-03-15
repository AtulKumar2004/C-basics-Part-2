#include <stdio.h>
#include <string.h>
int main()
{
int i,j=0,c=1;
char a[100];
char b[100];
printf("Enter a string: ");
gets(a);
int l=strlen(a);
for(i=l-1;i>=0;i--)
{
b[j++]=a[i];
}
for(i=0;i<l;i++)
{
if(b[i]!=a[i])
{
c=0;
break;
}
}
if(c==0)
{
printf("String is not palindrome\n");
}
else
{
printf("String is palindrome\n");
}
return 0;
}
