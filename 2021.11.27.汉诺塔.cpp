# include<stdio.h>
int main(void)
{
	void han(int n,char one,char two,char three);
	int m;
	printf("input m:\n");
	scanf("%d",&m);
	printf("the move is:\n");
	han(m,'a','b','c');
	return 0;
}
void han(int n,char one,char two,char three)
{
    void move(char x,char y);
	if(n==1)
		move(one,three);
	else
	{
	    han(n-1,one,three,two);
		move(one,three);
		han(n-1,two,one,three);
	}

}
void move(char x,char y)
{
   printf("%c->%c\n",x,y);
}