# include<stdio.h>
# include<math.h>
int main(void)
{
  double x0,x1,a;
  printf("input a:\n");
  scanf("%d",&a);
  x0=1;
  do
  {
	 x1=(x0+a/x0)/2;
     x0=x1;
  }while(fabs(x0-x1)>=1e-6);
  printf("x=%5.2lf",x0);
  return 0;¸ù
}
 