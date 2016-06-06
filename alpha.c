#include <stdio.h>

int main(void) {
	char a;
	scanf("%c",&a);
	if((a>=65&&a<=90)||(a<=122&&a>=97))
	printf("alphabet");
	else
	printf("not alphabet");
	return 0;
}
