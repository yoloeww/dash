
# include<stdio.h>
# include<string.h>
int main(void)
{
   char a[8];
   printf("input a number:\n");
   scanf("%s",a);
   int i,k=strlen(a);
   for(i=k;i>0;i--)
   {
       a[i*2]=a[i];
	   a[i*2-1]=' ';
   }
   printf("%s",a);
   return 0;
}