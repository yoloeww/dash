# include<stdio.h>
int main(void)
{
	int i;
float sn=100,hn=50;
for(i=1;i<10;i++)
{
   sn=sn+hn*2;;
   hn=hn/2;
}
printf("%8.2lf %8.2lf",hn,sn);
return 0;
}