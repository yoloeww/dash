# include<stdio.h>
int main(void)
{
   int i,n,a,sum=0;
   printf("input n:\n");
   scanf("%d",&n);
   printf("input a:\n");
   scanf("%d",&a);
   for(i=0;i<n;i++)
   {
       sum=sum+a;
	   a=a*10+a;
   }
   printf("sum=%d\n",sum);
   scanf("%d",sum);
   return 0;
}
