# include<stdio.h>
int shiliu(char *x)
{
    int n=0;
    while(*x != '\0')
    {
        if(*x>='0' && *x<='9')
            n=n*16+*x-'0';
        if(*x>='a'&& *x<='f')
            n=n*16+*x-'a'+10;
        if(*x>='A'&& *x<='F')
            n=n*16+*x-'A'+10;
        x++;
    }
    return n;
}
int main()
{   
    char a[100];
    int b;
    printf("please input a 16 figure\n");
    scanf("%s",a);
    b=shiliu(a);
    printf("%d\n",b);
    return 0;
}
