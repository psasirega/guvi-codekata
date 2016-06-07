#include <stdio.h>
#include <string.h>
int main(void) {
int dec,bin[100],i=0,q;
scanf("%d",&dec);
q=dec;
while(q!=0)
{
	bin[i++]=q%2;
	q=q/2;
}
while(i--)
printf("%d",bin[i]);
	return 0;
}
