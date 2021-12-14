# include<stdio.h>
int main(void)
{
   void sort(int *a,int *a);
   int a[10],i;
   int *pmax,*pmin;
   pmax=a;
   pmin=a;
   int max,j;
   for(i=0;i<10;i++)
   {
        if(*pmax<a[i]) 
			*pmax=&a[i];
		else if (*pmin>a[i])
			*pmin=&a[i]
   }
   sort(*pmax,&a[9]);
   sort(*pmin,&a[0]);
    for(i=0;i<10;i++)
		print();

}