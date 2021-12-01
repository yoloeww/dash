# include<stdio.h>
# define N 100
int main(void)
{
  int *p,count,end,i,n,a[N];
  p=a;
  printf("input n:\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
	  a[i]=i+1;
  end=0;
  count=0;
  i=0;
  while(end<n-1)
  {
	  if(a[i]!=0)
	  count++;
	  if(count==3)
	  {
	      count=0;
		  end++;
		  a[i]=0;
	  }
	  i++;
	  if(i==n)
		  i=0;
  }
  while(*p==0)
	  p++;
  printf("аТобак%d\n",*p);
  return 0;
}