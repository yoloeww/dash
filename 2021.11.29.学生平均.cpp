# include<stdio.h>
# include<stdlib.h>
# define N 3
struct student
{
	char name[20];
	float score[3];
	float aver;
}stu[N];
int main(void)
{
	FILE *fp;
	fp=fopen("D:\\input.txt","w");
	if(fp==NULL)
		printf("error");
    int i,j;
	printf("input messgae:\n");
	for(i=0;i<N;i++)
	{
		stu[i].aver=0;
		scanf("%s",stu[i].name);   //ÉÙÓÃgets
	   for(j=0;j<3;j++)
	   {
	      scanf("%f",&stu[i].score[j]);
             	stu[i].aver=stu[i].aver+stu[i].score[j];
	   }
	   stu[i].aver=stu[i].aver/3;
	}
	for(i=0;i<N;i++)
	{
		fprintf(fp,"the name is:%s\n",stu[i].name);
		printf("the name is:%s\n",stu[i].name);
	   for(j=0;j<3;j++)
	   {
	      printf("the score is:%6.2f\n",stu[i].score[j]);
		  fprintf(fp,"the score is:%6.2f\n",stu[i].score[j]);
	   }
	   	printf("the aver is:%6.2f\n",stu[i].aver);
		fprintf(fp,"the aver is:%6.2f\n",stu[i].aver);
	}
		return 0;
}