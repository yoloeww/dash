# include<stdio.h>
# include<string.h>
int main(void)
{
    char str[6][100],b[100];
	printf("input :\n");
	for(int i=0;i<6;i++)
	gets(str[i]);
	for(i=0;i<3;i++)
	{
	   strcpy(b,str[i]);
	   strcpy(str[i],str[6-i-1]);
	   strcpy(str[6-i-i],b);
	}
	for(i=0;i<6;i++)
		printf("%5s",str[i]);
	return 0;


}