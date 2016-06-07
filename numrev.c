#include <stdio.h>

int main(void) {
int num,n=0,q,rem;
scanf("%d",&num);
q=num;
while(q!=0)
{
	rem=q%10;
    n=(n*10)+rem;
    q=q/10;
}
printf("%d",n);
	return 0;
}
