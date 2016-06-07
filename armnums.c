#include <stdio.h>
#include <math.h>
int main(void) {
	int num,n=0,i,q,res=0,rem,a,b;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
	q=i;
	while(q!=0)
	{
		q=q/10;
		++n;
	}
	q=i;
	while(q!=0)
	{
		rem=q%10;
		res=res+pow(rem,n);
		q=q/10;
	}
	if(res==i)
	printf("%d\n",i);
	res=0;
	n=0;
	}
	return 0;
}
