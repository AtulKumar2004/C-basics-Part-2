#include <stdio.h>
#include <string.h>
int main()
{
int i,j=0,si,l,lsubs;
char a[100];
char subst[100];
printf("Enter a string: ");
gets(a);
printf("Enter the starting index of the substring with respect to string: ");
scanf("%d",&si);
printf("Enter the length of the substring: ");
scanf("%d",&lsubs);
l=strlen(a);
for(i=si;i<lsubs+si;i++)
{
subst[j++]=a[i];
}
for(i=0;i<lsubs;i++)
{
printf("%c",subst[i]);
}
printf("\n");
return 0;
}
