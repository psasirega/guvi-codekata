#include <stdio.h>

int main(void) {
int n,i,arr[100],max=0,min;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
min=arr[0];
for(i=0;i<n;i++)
{
	if(max<arr[i])
	max=arr[i];
	if(min>arr[i])
	min=arr[i];
	
}
printf("%d",(min+max));
	return 0;
}
