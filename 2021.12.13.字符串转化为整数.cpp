
# include<stdio.h>
# define N 100
int main(void)
{
	void convert(int p);
    int a;
	printf("input a number:\n");
	scanf("%d",&a);
	if(a<0)
	{
	    putchar('-');
		a=-a;
	}
	convert(a);
	return 0;
}
void convert(int p)
{
      int i;
	  if((i=p/10)!=0)
	       convert(i);
	  putchar(p%10+48);
	  putchar(32);
}