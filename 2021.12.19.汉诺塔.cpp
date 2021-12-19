# include<stdio.h>
void hanio(int n,char a,char b,char c)
{
	 void move(char i,char j);
     if(n==1)
		 move(a,c);
	 else
	 {
		 hanio(n-1,a,c,b);
		 move(a,c);
		 hanio(n-1,b,a,c);
	 }
}
void move(char i,char j)
{
   printf("%c->%c\n",i,j);
}
int main(void)
{
	int n;
        printf("input n:\n");
		scanf("%d",&n);
		hanio(n,'a','b','c');
		return 0;
}