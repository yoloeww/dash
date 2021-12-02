# include<stdio.h>
int main(void)
{
	char s[5]={'*','*','*','*','*'};
	int i,j,k;
	char space=' ';
	for(i=0;i<5;i++)
	{
	   printf("\n");
	   for(j=1;j<=i;j++)
		   printf("%c",space);
	   for(k=0;k<5;k++)
		   printf("%c",s[k]);
	}
	printf("\n");
	return 0;

} 