#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
//��������ʺ���
void longword(char s[],char ma[])
{
    int max=0, len=0;
    char m[200];
    int n=strlen(s);
    for (int i=0,j=0; i<=n; i++)
	{
        if ((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            m[len++]=s[i];
        else
		{
            m[len]='\0';
            len>max ? max=len, strcpy(ma, m), len=0 : len=0;
        }
    }
}
int main(void)
{
    char str[50],ma[200];
    printf("Please enter string:\n");       //����һ���ַ�
    gets(str);
    longword(str,ma);   //��������ʺ���
	printf("The longest word: ");
    puts(ma);
    return 0;
}
