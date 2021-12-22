# include<stdio.h>
# define N 100
void sort(char str1[N],char str2[N],int n)
{
        int i;
        for(i=0;i<n;i++)
             str1++;
        while(*str2!='\0')
        {
                   *str1=*str2;
                    str1++;
                    str2++;
         }
		*str1='\0';
}
int main(void)
{
	char str1[N],str2[N];
		printf("input two harc:\n");
	  gets(str1);
	  gets(str2);
	  int n;
	  scanf("%d",&n);
	  sort(str1,str2,n);
puts(str1);
	return 0;
}