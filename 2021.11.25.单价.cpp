# include<stdio.h>
# include<string.h>
# include<stdlib.h>
# include<malloc.h>
struct shop                 
{
	int flag;
	double price[12];
    double sum;

}stu[100]; 
int main(void)
{
   FILE *fp;
   int i,n,j,k;;
   double s=0;
   fp=fopen("D:\\古诗.txt","r");
   if(fp==NULL)
   {
     printf("error\n");
	 exit(-1);
   }
   fscanf(fp,"%d",&n);
   for(i=0;i<n;i++)
	   for(j=0;j<12;j++)
	   {
		   fscanf(fp,"%lf",&stu[i].price[j]); //输入不要乱加
	   }
	   printf("%d\n",n);
	   for(i=0;i<n;i++)
	   {
	   for(j=0;j<12;j++)
	   {
	      printf("%-7.0lf",stu[i].price[j]);
	   }
		  putchar('\n');
	   }
   for(i=0;i<n;i++)
   {
	  stu[i].flag=1;         //初始化结构体成员
	   for(j=0;j<12;j++)
		   for(k=j+1;k<12;k++)   //遍历
		   {
		      if(stu[i].price[j]==stu[i].price[k])
				  stu[i].flag=0;
		   }
   }
  for(i=0;i<n;i++)
  {
  if(stu[i].flag!=0)
  {
	   for(j=0;j<12;j++)
	   {
		  stu[i].price[j]=stu[i].price[j]*0.5;
          stu[i].sum+=stu[i].price[j];
	   }
  }
   else
   {
	    for(j=0;j<12;j++)
        stu[i].sum+=stu[i].price[j];
   }
  }
    for(i=0;i<n;i++)
	{
  printf("%-3.0lf\n",stu[i].sum);
	s+=stu[i].sum;
	}
	printf("%-3.0lf\n",s);
	return 0;
}
