# include<stdio.h>
int main(void)
{
	int n,a[100],i,temp;
	printf("input n:\n");
	scanf("%d",&n);
	printf("input number:\n");
	for(i=0;i<n;i++)
    scanf("%d",&a[i]);
	for(i=0;i<n/2;i++)
	{
	   temp=a[n-1-i];
	   a[n-1-i]=a[i];
	   a[i]=temp;
	}
	for(i=0;i<n;i++)
    printf("%5d",a[i]);
	return 0;
}
