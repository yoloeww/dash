# include<stdio.h>
int main(void)
{
   int i,sum=1;
   for(i=9;i>0;i--)
   {
	   sum=(sum+1)*2;
   }
   printf("����һ������%d������\n",sum);
   return 0;
}