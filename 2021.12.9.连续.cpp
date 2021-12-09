# include<stdio.h>
# include<string.h>
void count(char *s)
{
   int i,j,a[20],temp,num=0;
   for(i=0;i<strlen(s);i++)
   {
       if(*(s+i)>='0'&&*(s+i)<='9')
	   {
		  temp=*(s+i)-'0';
	      for(j=i+1;j<strlen(s);j++)
		  {
		     if(*(s+j)>='0'&&*(s+j)<='9')
			 {
			    temp=temp*10+*(s+j)-'0';
				i++;
			 }
			 else
				 break;
		  }
		  *(a+num)=temp;
		  num++;
	   }
   }
   for(i=0;i<num;i++)
	   printf("%5d\n",a[i]);
}
int main(void)
{
  char str[80];
  printf("input a string:\n");
  scanf("%s",str);
  count(str);
  return 0;
}