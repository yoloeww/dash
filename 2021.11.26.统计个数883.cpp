# include<stdio.h>
# include<string.h>
int main(void)
{
   void add(char *p);
   char str[100];
   printf("input char :\n");
   gets(str);
   add(str);
   return 0;
}
void add(char *p)
{
    int len,i,a=0,b=0;
	len=strlen(p);
	for(i=0;i<len;i++)
	{
		if(p[i]=='#')
			a++;
		if(p[i]=='@')
			b++;
	}
	printf("#=%d\n",a);
		printf("@=%d\n",b);

}