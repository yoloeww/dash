# include<stdio.h>
# define N 5
int f(int a[N],int n)
{
     int low=0,end=N-1,flag=0,mid;
    while(low<=end)
    {
       mid=(low+end)/2;
       if(n<a[mid])
	   {
         low=mid+1; 
	   }
      else if(n>a[mid])
	  {
          end=mid-1;
	  }
       else
	   return mid;
     }    
  
		 return -1;
}
int main(void)
{
	int a[N]={87,84,76,32,22},n;
	printf("input a number:\n");
	scanf("%d",&n);
	int k=f(a,n);
	if(k==-1)
		printf("no\n");
	else
	printf("%d",k);

return 0;	

}