
#include<stdio.h>
void f1(char *t, char *s) ;
int main()
{ char *p="a1b2c3d4e5", st[20];
printf("%s\n",p+2);
f1(st, p) ;
printf("%s\n",st);
return 0;
}
void f1(char *t, char *s)
{ int i;
for(i=0; *(s+i)!='\0';i++)
{ *(t++) =*(s+2*i) ;
if(*(s+2*i) ==' \0'||*(s+2*i+1)=='\0') break;
}
*t='\0';
return ;
}