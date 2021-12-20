# include<stdio.h>
int main(void)
{
	int a,b,c,max;
	printf("input a b c:\n");
	scanf("%d%d%d",&a,&b,&c);
	max=a;
	if(max<b)
		max=b;
	else
		;
	if(max<c)
		max=c;
	else
		;
	printf("max=%d\n",max);
	return 0;
}