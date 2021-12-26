# include<stdio.h>
int main(void)
{
  void convert(int a);
  int a;
  printf("input a:\n");
  scanf("%d",&a);
  if(a<0)
  {
	  a=-a;
	  putchar('-');
  }
  convert(a);
  return 0;
}
void convert(int a)
{
	int n,sum=0;
   if((n=a%0)!=0)
	   convert(n);
   putchar(32);
}