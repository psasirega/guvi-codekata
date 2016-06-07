#include <stdio.h>

int main(void) {
int num,i;
unsigned long long fact=1;
scanf("%d",&num);
for(i=1;i<=num;i++)
fact=fact*i;
printf("%llu",fact);
	return 0;
}
