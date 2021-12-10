# include<stdio.h>
# include<string.h>
void replace(char *p)
{
  int i,flag=0;
  int len=strlen(p);
  for(i=0;i<len;i++)
  {
     if(p[i]=='h'&&p[i+1]=='e'&&p[i+2]=='r')
	 {
	    p[i]='s';
		p[i+1]='h';
		p[i+2]='e';
		flag=1;
	 }
  }
  if(flag==0)
		 printf("error");
}
int main(void)
{
  char str[100];
  printf("input a string:\n");
  scanf("%s",str);
  replace(str);
 
	 printf("%s\n",str);
  return 0;

}