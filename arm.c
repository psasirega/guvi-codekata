#include <stdio.h>
#include <math.h>
int main(void) {
	int num,n=0,i,q,res=0,rem;
	scanf("%d",&num);
	q=num;
	while(q!=0)
	{
		q=q/10;
		++n;
	}
	q=num;
	while(q!=0)
	{
		rem=q%10;
		res=res+pow(rem,n);
		q=q/10;
	}
	if(res==num)
	printf("armstrong number");
	else
	printf("not an armstrong number");
	return 0;
}
