# include<stdio.h>
int main(void)
{
   double sum=0.0,t;
   int m,a=1,b=2,n,i;
   printf("input n\n");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
	   m=b;
	   t=1.0*b/a;
	   sum+=t;
	   b=a+b;
	   a=m;
   }
   printf("%3.2lf\n",sum);
   return 0;
}
