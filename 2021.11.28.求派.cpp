# include<stdio.h>
# include<math.h>
int main(void)
{
  int sign=1;
  float p1=0,n=1.0,t=1;
  while(fabs(t)>=1e-6)
  {
       p1=p1+t;
	   n=n+2;
	   sign=-sign;
	   t=sign/n;
  }
  p1=p1*4;
  printf("%5.7f\n",p1);
  return 0;
  
}