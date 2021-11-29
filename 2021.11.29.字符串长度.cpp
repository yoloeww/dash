# include<stdio.h>
int main(void)
{
  char str[100];
  char *p;
  p=str;
  int len=0;
  printf("input a string:\n");
  scanf("%s",str);
  while(*p!='\0')
  {
      len++;
	  p++;
  }
  printf("the string length is %d\n",len);
  return 0;
}
