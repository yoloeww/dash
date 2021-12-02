# include<stdio.h>
# include<string.h>
int main(void)
{
  char a[80];
  int i;
  printf("input a string:\n");
  gets(a);
  for(i=strlen(a)-1;i>=0;i--)
	  printf("%c",a[i]);
  return 0;
}
