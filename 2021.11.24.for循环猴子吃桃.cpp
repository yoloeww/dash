# include<stdio.h>
int main(void)
{
   int i,sum=1;
   for(i=9;i>0;i--)
   {
	   sum=(sum+1)*2;
   }
   printf("猴子一共吃了%d个桃子\n",sum);
   return 0;
}