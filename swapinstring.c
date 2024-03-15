#include <stdio.h>
#include <string.h>
int main()
{
int i;
char st[100];
printf("Enter a string: ");
gets(st);
int l=strlen(st);
char *ptr=st;
if(l%2==0)
{
for(i=0;i<l-1;i++)
{
char temp=ptr[i];
ptr[i]=ptr[i+1];
ptr[i+1]=temp;
i++;
}
printf("After swapping:\n%s\n",st);
}
else
{
printf("The length of the string is odd\n");
}
return 0;
}
