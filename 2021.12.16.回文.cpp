# include<stdio.h>
int main(void)
{
   int n,i,s=0;
   printf("input n:\n");
   scanf("%d",&n);
   for(i=1;i<=n;i=i*10)
   {
      s=n%(10*i)/i+s*10;
   }
   printf("%d",s);
   return 0;
}