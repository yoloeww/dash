# include<stdio.h>
# define N 3
void f(int *a,int *b)
{
   int temp;
   temp=*a;
   *a=*b;
    *b=temp;
  }
int main(void)
{
   int a[10],*max,*min;
   int i;
   printf("input number:\n");
    for(i=0;i<N;i++)
		scanf("%d",&a[i]);
max=a;
min=a;
 for(i=0;i<N;i++)
 {
  if(*max<a[i])
 max=&a[i];
 }
  for(i=0;i<N;i++)
   if(*min>a[i])
 min=&a[i];  
f(min,&a[N-1]);
f(max,&a[0]);
for(i=0;i<N;i++)
printf("%5d",a[i]);
return 0;
}