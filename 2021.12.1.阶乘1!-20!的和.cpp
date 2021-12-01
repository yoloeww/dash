# include<stdio.h>
# define N 3
int main(void)
{
   int t=1,sum=0,i;
   for(i=1;i<=N;i++)
   {
	   t=t*i;
	   sum+=t;
   }
   printf("sum=%d\n",sum);
   return 0;
}
