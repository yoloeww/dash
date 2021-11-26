# include<stdio.h>
int main(void)
{
  int a[100],i,end,count,n,*p;
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
			a[i]=0;
		    end++;
			count=0;
		}
		i++;
		if(i==n)
			i=0;

  }
  while(*p==0)                         //用指针自加，因为数组名为常量
	  p++;
  printf("留下第%d个\n",*p);
  return 0;
}