# include<stdio.h>
int main(void)
{
    void copy(char *p1,char *p2,int m);
	char str[100],str2[100],m;
    printf("input a string:\n");
	scanf("%s",str);
	printf("input a string2:\n");
	scanf("%s",str2);
	printf("input m:\n");
	scanf("%d",&m);
	copy(str,str2,m);
	printf("%s",str);
	return 0;
}
 void copy(char *p1,char *p2,int m)
 {

     int i;
	 for(i=0;i<m;i++)
	 {
	    p1++;
	 }
	 while(*p2!='\0')
     {
		 *p1=*p2;
		 p1++;
		 p2++;
	 }
	 *p1='\0';

 }