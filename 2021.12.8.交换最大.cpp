# include<stdio.h>
# define N 10
int main(void)
{
   int a[N],i,j,m,n,max,t,min;
   printf("input number:\n");
   for(i=0;i<N;i++)
	   scanf("%d",&a[i]);
   max=a[0];
   min=a[0];
   for(i=0;i<N;i++)
   {
      if(a[i]>max)
	  {
		  max=a[i];
		  m=i;
	  }
	  if(a[i]<min)
	  {
	      min=a[i];
		  n=i;
	  }
   }
   t=a[N-1];
   a[N-1]=a[m];
   a[m]=t;
   t=a[0];
   a[0]=a[n];
   a[n]=t;
    for(i=0;i<N;i++)
	  printf("%5d",a[i]);
	return 0;
}