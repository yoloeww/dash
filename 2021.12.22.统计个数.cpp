# include<stdio.h>
int main(void)
{
char p[3][80];
int big=0,space=0,other=0,small=0,math=0,i,j;
for(i=0;i<3;i++)
gets(p[i]);
for(i=0;i<3;i++)
    for(j=0;j<80&&p[i][j]!='\0';j++)
    {
     if(p[i][j]>='a'&&p[i][j]<='z')
                small++;
     else if(p[i][j]>='A'&&p[i][j]<='Z') 
               big++;
     else if(p[i][j]>='0'&&p[i][j]<='9') 
                math++;
     else if(p[i][j]==' ')
                space++;
     else
                other++;
    }
		 printf("big=%d\nsmall=%d\nmath=%d\nspace=%d\nother=%d\n",big,small,math,space,other);
	return 0;
}