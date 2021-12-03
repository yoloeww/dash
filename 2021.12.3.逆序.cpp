# include<stdio.h>
# define N 100
int main(void)
{
   int a[N],i,temp,n;
   printf("input n:\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
   printf("input number:\n");
   for(i=0;i<n/2;i++)
   {
      temp=a[n-i-1];
	  a[n-i-1]=a[i];
	  a[i]=temp;
   }
     for(i=0;i<n;i++)
	  printf("%5d",a[i]);
	 return 0;
}