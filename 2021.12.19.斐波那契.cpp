# include<stdio.h>
int f(int n)
{
  if(n==1)
	  return 1;
  else if(n==2)
	  return 1;
  else
	  return f(n-2)+f(n-1);
}
int main(void)
{
    int i,j;
	printf("input number:\n");
	scanf("%d",&j);
	for(i=1;i<=j;i++)
	{
		printf("%5d",f(i));
	}
	return 0;

}