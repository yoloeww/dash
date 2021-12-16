# include<stdio.h>
# define N 3
int main(void)
{
   int a[N],i,j,max,temp;
   printf("input number:\n");
   for(i=0;i<N;i++)
	   scanf("%d",&a[i]);
   for(i=0;i<N-1;i++)
   {
	   max=i;
	   for(j=i+1;j<N;j++)
	   {
	      if(a[j]>a[max])
			  max=j;
	   }
	   temp=a[i];
	   a[i]=a[max];
	   a[max]=temp;
   }
    for(i=0;i<N;i++)
	   printf("%5d",a[i]);
	return 0;
}