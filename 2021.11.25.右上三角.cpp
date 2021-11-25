# include<stdio.h>
# define M 3
int main(void)
{
   int sum=0,a[M][M],i,j;
   printf("input number:\n");
   for(i=0;i<M;i++)
	   for(j=0;j<M;j++)
		   scanf("%d",&a[i][j]);
for(i=0;i<M;i++)
	   for(j=i;j<M;j++)
		   sum+=a[i][j];
	   printf("срио╫г=%d\n",sum);
	   return 0;

}