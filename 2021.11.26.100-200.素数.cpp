# include<stdio.h>
int main(void)
{
	int i,j;
	for(i=100;i<=200;i++)
	{
	{
		for(j=2;j<i;j++)
			if(i%j==0)
				break;
	}
		if(i==j)
				printf("%5d\n",i);
	}
			return 0;

}