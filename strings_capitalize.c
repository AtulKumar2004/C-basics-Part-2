#include <stdio.h>
#include <string.h>
int main()
{
int i,j;
char st[100];
printf("Enter a sentence: ");
gets(st);
int l=strlen(st);
if(st[0]>=97 && st[0]<=122)
{
st[0]-=32;
}
for(i=0;i<l-1;i++)
{
if(st[i]==' ' && (st[i+1]>=97 && st[i+1]<=122))
{
st[i+1]-=32;
}
}
printf("%s\n",st);
return 0;
}
