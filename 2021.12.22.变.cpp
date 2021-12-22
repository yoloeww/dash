# include<stdio.h>
# define N 10
void sort(int a[N],int k,int index)
{
    int i,temp;
    for(i=0;i<k;i++)
   {
      temp=a[index];
      a[index]=a[index-1];
      a[index-1]=temp;
      index--;         
   }
}
int main(void)
{
int a[N],n,m,i;
printf("input number:\n");
scanf("%d",&n);
printf("input move:\n");
scanf("%d",&m);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=n-m;i<n;i++)
{
      sort(a,n-m,i);
}
for(i=0;i<n;i++)
printf("%4d",a[i]);
return 0;
}