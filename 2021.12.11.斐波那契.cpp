# include<stdio.h>
int f(int n)
{
   if(n==1)
	   return 1;
   else if(n==0)
	   return 1;
   else
	   return (f(n-1)+f(n-2));
}
int main(void)
{
   int n;
   printf("input n:\n");
   int i;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("%5d",f(i));
   }
   return 0;
}
