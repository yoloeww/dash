
# include<stdio.h>
int main(void)
{
   int i;
   double h,s;
   s=100;
   h=50;
   for(i=2;i<=10;i++)
   {
        s+=h*2;
		h=h/2;
   }
   printf("%7.2lf\n%7.2lf",s,h);
   return 0;
}
