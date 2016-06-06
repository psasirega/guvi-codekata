#include <stdio.h>

int main(void) {
	int n,i,c,b;
	scanf("%d",&n);
	int a[100];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d%d",&c,&b);
	for(i=c;i<=b;i++)
	{
		if(a[i]%2==0)
		printf("%d\n",a[i]);
	}
	return 0;
}
