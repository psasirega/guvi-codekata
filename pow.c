#include <stdio.h>

int main(void) {
 int n,b,ans=1;
 scanf("%d%d",&n,&b);
while(b!=0)
{
ans=ans*n;
--b;
}
 printf("%d",ans);
	return 0;
}
