# include<stdio.h>
# define X 2
# define Y 3
# define Z 2
int main(void)
{
    int a[X][Y],b[Y][Z],c[X][Z]={0};
	int i,j,k;
	printf("input a:\n");
	for(i=0;i<X;i++)
		for(j=0;j<Y;j++)
			scanf("%d",&a[i][j]);
			printf("input b:\n");
			for(i=0;i<Y;i++)
		for(j=0;j<Z;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<X;i++)
	{
		for(j=0;j<Z;j++)
		{
		       for(k=0;k<Y;k++)
			   {
			      c[i][j]+=a[i][k]*b[k][j];
			   }
		}
	}
			for(i=0;i<X;i++)
			{
		for(j=0;j<Z;j++)
		{
			printf("%5d",c[i][j]);
		}
		printf("\n");
			}
return 0;
}
