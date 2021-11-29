# include<stdio.h>
int main(void)
{
   void sort(int *a,int *b);
   int a[10],i,j;
   printf("input number:\n");
   for(i=0;i<10;i++)
	   scanf("%d",&a[i]);
   for(i=0;i<9;i++)
	   for(j=0;j<9-i;j++)
	   {
	     if(a[j]>a[j+1])
		 {
		     sort(&a[j],&a[j+1]);
		 }
	   }
  for(i=0;i<10;i++)
	  printf("%5d\n",a[i]);
  return 0;
} 
void sort(int *a,int *b)
{
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
}