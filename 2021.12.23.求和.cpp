# include<stdio.h>
int main(void)
{
float a=2,b=1,s=0,t,temp;
int i;
for(i=0;i<20;i++)
{
      t=a/b;
      s+=t;
      temp=a;
      a=a+b;
      b=temp;
}
printf("s=%8.2lf\n",s);
return 0;
}
