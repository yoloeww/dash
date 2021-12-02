# include<stdio.h>
# define N 3
# include<string.h>
int main(void)
{
	char a[N][80];
	int b=0,s=0,m=0,o=0,t=0;
	int i,j;
	printf("input %d char:\n",N);
	for(i=0;i<N;i++)
		gets(a[i]);
	for(i=0;i<N;i++)
	{
	   for(j=0;j<80&&a[i][j]!='\0';j++)
		   if(a[i][j]>='A'&&a[i][j]<='Z')
			   b++;
		   else if(a[i][j]>='a'&&a[i][j]<='z')
			   s++;
		   else if(a[i][j]>='0'&&a[i][j]<='9')
			   m++;
		   else if(a[i][j]==' ')
			   t++;
		   else
			   o++;
	} 
	printf("bif=%d,small=%d,math=%d,space=%d,other=%d\n",b,s,m,t,o);
	return 0;
}