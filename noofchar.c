#include <stdio.h>
#include <string.h>
int main(void) {
	char str[500];
	int l;
	scanf("%[^\n]s",str);
	l=strlen(str);
	printf("%d",l);
	return 0;
}
