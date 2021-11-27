# include<stdio.h>
int home(int n)
{
   int m;
   if(n==1)
	   m=1;
   else if(n==0)
	   m=1;
   else if(n>1)
	   m=n*home(n-1);
   else
	   m=-1;
   return m;
}
int main(void)
{
   int n;
   printf("input n:\n");
   scanf("%d",&n);
   printf("%d!=%d\n",n,home(n));
   return 0;
}