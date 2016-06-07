#include <stdio.h>

int main(void) {
int n,t1=0,t2=1,next,i;
scanf("%d",&n);
printf("%d\n%d\n",t1,t2);
for(i=3;i<=n;i++)
{
	next=t1+t2;
	t1=t2;
	t2=next;
	printf("%d\n",next);
	
}
	return 0;
}
