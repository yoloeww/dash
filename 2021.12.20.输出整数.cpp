# include<stdio.h>
# include<math.h>
int main(void)
{
   int q,n;
   printf("input n:\n");
   scanf("%d",&n);
   while(n>1000)
   {
      printf("input again:\n");
	  scanf("%d",&n);
   }
   q=(int)sqrt(n);
   printf("%d\n",q);
   return 0;
}