# include<stdio.h>
# define M 6
int main(void)
{
	int a[M]={1,4,8,10,22},i,j,num;
	printf("input number:\n");
	scanf("%d",&num);
	if(num<a[0])
	{
	   for(i=4;i>0;i--)
		   a[i+1]=a[i];
	}
	a[0]=num;
	if(num>a[M-2])
		a[M-1]=num;
	for(i=0;i<M-2;i++)
	{
		if(num<a[i])
		{
			for(j=M-1;j>=i;j--)
			{
			  a[j]=a[j-1];
			}
			a[i]=num;
		}
	}
	for(i=0;i<M;i++)
		printf("%5d",a[i]);
	return 0;
}
