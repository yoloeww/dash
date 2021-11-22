# include<stdio.h>
int main(void)
{
  void convert(int n);
  int n;
  printf("input a number:\n");
  scanf("%d",&n);
  if(n<0)
  {
    putchar('-');
	n=-n;
  }
  convert(n);
  return 0;
}  
void convert(int n)
{
  int i;
  if((i=n/10)!=0)
     convert(i);
	 putchar(n%10+'0');
} 