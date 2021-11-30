# include<stdio.h>
# define sum 100000
int main(void)
{
  float amount,aver=0,total=0;
  int i=0;
  while(total<100000)
  {
      printf("input money:\n");
	  scanf("%f",&amount);
	  total+=amount;
	  i++;
  }
  aver=total/i;
  printf("%d¸öÈË\nave=%6.2lf\n",i,aver);
  return 0;
}