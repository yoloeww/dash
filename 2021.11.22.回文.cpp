# include<stdio.h>
int main(void)
{
   int n,s=0,i;
   printf("input number:\n");
   scanf("%d",&n);
   for(i=1;i<=n;i=i*10)
   {
      s=n%(10*i)/i+s*10;
   }
   printf("%d\n",s);
   return 0;
}