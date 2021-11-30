# include<stdio.h>
int main(void)
{
    int i,num,flag=1;
	printf("input a number:\n");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
	   if(num%i==0)
	   {
		   flag=0;
		   break;
	   }
	}
	if(flag)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}
