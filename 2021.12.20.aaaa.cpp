# include<stdio.h>
int main(void)
{
int i,n,a,s=0;
printf("input a&n:\n");
scanf("%d%d",&a,&n);
for(i=0;i<n;i++)
{
    s+=a;
    a=a*10+a;
}
printf("sum=%d\n",s);
return 0;
}