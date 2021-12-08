#include<stdio.h>
int MyStrCmp(char *s, char *t) ;
int main()
{ char *str1="ab", *str2="ac", *str3="AB";
char *str4="abc", *str5="ab", *str6="a";
printf("%d\n",MyStrCmp(str1,str2));
printf("%d\n",MyStrCmp(str1,str3));
printf("%d\n",MyStrCmp(str1,str4));
printf("%d\n",MyStrCmp(str1,str5));
printf("%d\n",MyStrCmp(str1,str6));
return 0;
}
int MyStrCmp(char *s, char *t)
{ int r;
while(*s!='\0'&&*t!='\0')
{ if(*s!=*t) break;
s++; t++;
}
r=*s-*t;
return r;
}