#include <stdio.h>

int main(void) {
int num,rem,q,i=0;
scanf("%d",&num);
q=num;
while(q!=0)
{
	rem=q%10;
	i=(i*10)+rem;
	q=q/10;
}
if(num==i)
printf("palindrome");
else
printf("not palindrome");
	return 0;
}
