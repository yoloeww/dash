# include<stdio.h>
int age(int n)
{
	int c;
	if(n==1)
		c=10;
	else
		c=age(n-1)+2;
	return c;
}
int main(void)
{
	int n;
   printf("input people\n");
   scanf("%d",&n);
   printf("%d\n",age(n));
   return 0;
}