# include<stdio.h>
int main(void)
{
   int n,i,j,sum=0;
   printf("input a number:\n");
   scanf("%d",&n);
   for(i=2;i<n;i++)
   {
	   for(j=2;j<i;j++)
	   {
		   if(i%j==0)
			   break;
	   }
		   if(i!=j)
			   sum=sum+i;
   }
		   printf("%d\n",sum);
		   return 0;

}