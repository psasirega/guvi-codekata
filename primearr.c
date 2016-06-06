#include <stdio.h>

int main(void) {
	int n,i,c,b,j,flag=0;
	scanf("%d",&n);
	int a[100];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d%d",&c,&b);
	for(i=c;i<=b;i++)
	{
	for(j=2;j<=a[i]/2;j++)
	{
		if(a[i]%j==0)
		flag=1;
	}
	if(flag==0)
	printf("%d\n",a[i]);
	flag=0;
	}
	return 0;
}
