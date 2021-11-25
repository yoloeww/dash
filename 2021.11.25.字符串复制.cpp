# include<stdio.h>
void copy(char *p1,char *p2)
{
   while(*p2!='\0')
   {
      *p1=*p2;
	  p1++;
	  p2++;
   }
   *p1='\0';
}
int main(void)
{
   char s1[100],s2[100];
   printf("input two char:\n");
   gets(s1);
   gets(s2);
   copy(s1,s2);
   puts(s1);
   return 0;
}