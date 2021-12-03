# include<stdio.h>
# include<string.h>
int fun(char p[])
{
  int s=0,t,i=0,j,n=strlen(p),k;
  if(p[0]=='-')
    i++;
  for(j=i;j<n;j++)
  {
       t=p[j]-'0';
	   s=s*10+t;
  }
  if(p[0]=='0')
	  return -s;
  else
	  return s;
}
int main(void)
{
  char s[100];
  int n;
  printf("input a math string:\n");
  gets(s);
  n=fun(s);
  printf("end=%d\n",n);
}
