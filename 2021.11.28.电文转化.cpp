# include<stdio.h>
int main(void)
{
  char ch;
  printf("input a char:\n");
  scanf("%c",&ch);   //chÒª¼ÓµØÖ·
  if(ch>='a'&&ch<='v'||ch>='A'&&ch<='V')
  {
     ch=ch+4;
  }
  else
	  ch=ch-22;
  printf("%c\n",ch);
  return 0;
}