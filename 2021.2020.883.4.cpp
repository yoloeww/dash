#include<stdio.h>
int fun(void) ;
int main()
{ int i;
for(i=0; i<5; i++) printf("%d\n", fun() ) ;
return 0;
}
int fun(void)
{ static int f1=1, f2=1;
int r;
r=f1+f2;
f1=f2;
f2=r;
return r;
}