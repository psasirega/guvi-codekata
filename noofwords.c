#include <stdio.h>
#include <string.h>
int main(void) {
	char str[500];
	int l,cnt=1,i;
	scanf("%[^\n]s",str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]==' ')
		++cnt;
	}
	printf("%d",cnt);
}
