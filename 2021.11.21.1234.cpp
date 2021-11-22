# include<stdio.h>
int main(void)
{
  char a[8],i;
  printf("input array:\n");
  for(i=0;i<4;i++)
	  scanf("%c",&a[i]);
  for(i=4;i>=0;i--)
  {
    a[i*2-1]=a[i];
	a[i]=' ';
  }
  for(i=0;i<8;i++)
	  printf("%c",a[i]);
  return 0;
}