# include<stdio.h>
# include<math.h>
int main(void)
{
    double a,b,c;
	double p,x1,x2;
	printf("input a,b,c:\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	p=b*b-4*a*c;
	if(p>0)
	{
	   x1=(-b+sqrt(p))/(2*a);
	   x2=(-b-sqrt(p))/(2*a);
	   printf("%5.2lf\n%5.2lf\n",x1,x2);
	}
	else if(p==0)
	{
	   x1=x2=(-b+sqrt(p))/2*a;
	   printf("%5.2lf\n%5.2lf\n",x1,x2);
	}
	else 
	{
		x1=-b/(2*a);
		x2=sqrt(-p)/(2*a);
		 printf("%5.2lf+%5.2lfi\n",x1,x2);
		 printf("%5.2lf-%5.2lfi\n",x1,x2);
	}
	return 0;
    
}