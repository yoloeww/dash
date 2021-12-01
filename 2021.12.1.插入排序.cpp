# include<stdio.h>
# define N 10
int main(void)
{
   int a[N]={1,4,7,9,10,23,26,32,213},i,p,n;
   printf("input n:\n");
   scanf("%d",&n);
   for(i=0;i<N-1;i++)
   {
	   if(a[i]>n)
           break; 
   }
   p=i;
   for(i=N-2;i>=p;i--) //ÄæÐò
   {
      a[i+1]=a[i];
   }
   a[p]=n;
   for(i=0;i<N;i++)
	   printf("%5d",a[i]);
   return 0;
}