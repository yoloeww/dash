# include<stdio.h>
int main(void)
{
   char ch;
   printf("input a char:\n");
   ch=getchar();
   if(ch>='A'&&ch<='Z')
	   ch=155-ch;
    else if(ch>='a'&&ch<='z')
	   ch=219-ch;
	else
		;
	printf("%c\n",ch);
	return 0;

}