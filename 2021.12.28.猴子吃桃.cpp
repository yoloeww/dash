# include<stdio.h>
int main(void)
{
  int x=1,i;
  for(i=9;i>0;i--)
  {
	  x=(x+1)*2;
  }
  printf("sum=%d\n",x);
  return 0;
}