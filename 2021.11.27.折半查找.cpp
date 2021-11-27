# include<stdio.h>
int main(void)
{
 int found(int a[10],int m);
   int a[10]={1,3,5,6,7,9,10,23,33,211},n;
   printf("input n:\n");
   scanf("%d",&n);
   int k=found(a,n);
   if(k==-1)
	   printf("no\n");
   else
	   printf("%d\n",k);
   return 0;
}
int found(int a[10],int m)
{
     int mid,end=9,low=0;
	 while(low<=end)
	 { 
		 mid=(end+low)/2;
		 if(m>a[mid])
		 {
		    low=mid+1;
		 }
		 else if(m<a[mid])
		 {
			 end=mid-1;
		 }
		 else
			 return mid;
	 }
	 return -1;
	 
}