# include<string.h>
# include<stdio.h>
# define N 3
int main(void)
{
char str[N][80];
char max[80];
int i,j;
for(i=0;i<N;i++)
gets(str[i]);
for(i=0;i<N-1;i++)
{
   for(j=0;j<N-1-i;j++)
   {
      if(strcmp(str[j],str[j+1])>0)
    {
           strcpy(max,str[j+1]);   
           strcpy(str[j+1],str[j]);
           strcpy(str[j],max);
   }
   }
}
   for(i=0;i<N;i++)
puts(str[i]);
   return 0;

}