# include<stdio.h>
int main(void)
{
  int convert(int a);
  int a;
  printf("input a:\n");
  scanf("%d",&a);
  if(a<0)
  {
	  a=-a;
	  putchar('-');
  }
  int k=convert(a);
  printf("k=%d",k);
  return 0;
}
int convert(int a)
{
	int n,sum=0;
   if(n=(a%10)!=0)
	  sum+=convert(n);
   putchar(32);
   return sum;
}