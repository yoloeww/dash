# include<stdio.h>
int main(void)
{
   int i,j,flag;
   for(i=100;i<=200;i++)
   {
	   flag=1;
	   for(j=2;j<i;j++)
	   {
		   if(i%j==0)
		   {
			   flag=0;
		       break;
		   }
	   }
	   if(flag)
		   printf("%5d",i);
	   else
		   ;
   }
   return 0;
}