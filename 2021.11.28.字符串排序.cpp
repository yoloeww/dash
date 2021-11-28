# include<stdio.h>
# include<string.h>
# define N 3
int main(void)
{
    char str[N][100];
	int i,j,max;
	char a[100];
	printf("input ten char :\n");
	for(i=0;i<N;i++)
		gets(str[i]);
	for(i=0;i<N-1;i++)
	{
	   max=i;
	     for(j=i+1;j<N;j++)
		 {
		     if(strcmp(str[max],str[j])>0)
				 max=j;
		 }
		 if(i!=j)
		 {
		    strcpy(a,str[i]);
			strcpy(str[i],str[max]);
			strcpy(str[max],a);
		 }
	}
		for(i=0;i<N;i++)
		puts(str[i]);
  return 0;
}
