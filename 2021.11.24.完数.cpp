# include<stdio.h>
int main(void)
{
  int n,flag=0,i,j,sum=0;
  printf("input n:\n");
  scanf("%d",&n);
  for(i=1;i<n;i++)
  {
	  sum=0;
	  if(n%i==0)
	  {  
		  sum+=i;
	      if(n==sum)
		  { 
		  flag=1;
		  printf("yes\n");
		  for(j=1;j<sum;j++)
			  if(n%j==0)
			  printf("%5d",j);
		  }
	  }
	  if(flag==0)
		  printf("no\n");
  }
  return 0;
}