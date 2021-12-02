# include<stdio.h>
# include<string.h>
int main(void)
{
  char str[100];
  int i,n=0,len;
  printf("input a string:\n");
  gets(str);
  len=strlen(str);;
  for(i=0;i<len;i++)
  {
     if(str[i]==' '&&str[i+1]!=' '||str[i+1]=='\0')
		 n++;
  }
  printf("the word is %d\n",n);
  return 0;
}