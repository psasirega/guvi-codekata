#include <stdio.h>
#include <string.h>
int main(void) {
char str[100][100];
int n,i,len,l,cnt=0;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%s",str[i]);
scanf("%d",&len);
for(i=0;i<n;i++)
{
l=strlen(str[i]);
if(l==len)
++cnt;
}
printf("%d",cnt);
	return 0;
}
