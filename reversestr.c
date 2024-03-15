#include <stdio.h>
#include <string.h>
int main()
{
int i,t;
char st[100];
printf("Enter a string: ");
gets(st);
int l=strlen(st);
char *p=st;
t=l-1;
for(i=0;i<l/2;i++)
{
char temp=*(p+i);
*(p+i)=*(p+t);
*(p+t)=temp;
t--;
}
for(i=0;i<l;i++)
{
printf("%c",st[i]);
}
return 0;
}

