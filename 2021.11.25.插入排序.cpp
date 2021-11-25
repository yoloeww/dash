# include<stdio.h>
int main(void)
{
	int a[11]={10,20,30,40,65,68,69,87,100,110},i,p=10,b;
	printf("you number:\n");
	scanf("%d",&b);
	for(i=0;i<10;i++)
		if(b<a[i])
		{
			p=i;
		break;
		}
		for(i=9;i>=p;i--)
			a[i+1]=a[i];
		a[p]=b;
		for(i=0;i<11;i++)
			printf("%5d",a[i]);
		putchar('\n');
		return 0;

}