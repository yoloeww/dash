#include<stdio.h>
int main()
{
	void qaq(char *p);
	char s[1000],*q;
	q=s;
	printf("input a string:\n");
	gets(s);
	qaq(q);
	return 0;
}
void qaq(char *p)
{
	int i,b[1000],j=0,m=0;
	int flag=0;
	for(;*p!='\0';p++)
	{
		if(*p>='0'&&*p<='9')
		{
			m=m*10+(*p-'0');
			flag=1;
		}
		else
		{
			if(flag==1)
			{
				b[j++]=m;
				m=0;
			}
			flag=0;
		}
	}
	

	b[j]='\0';
	for(i=0;b[i]!='\0';i++)
	{
		printf("%d ",b[i]);
	}
}
