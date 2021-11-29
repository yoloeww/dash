# include<stdio.h>
# include<string.h>
# include<malloc.h>
# include<stdlib.h>
# define M 3
typedef struct student
{
    int score;
	char name[20];
	struct student *next;
}N,*P;
P create(void)
{
     P head=(P)malloc(sizeof(N));
	 if(head==NULL)
	 {
		 printf("off");
		 exit(-1);
	 }
	 head->next=NULL;
	 return head;
}
void input(P head,char num[],int n)
{
    P last;
    last=(P)malloc(sizeof(N));
	 if(last==NULL)
	 {
		 printf("off");
		 exit(-1);
	 }
	 strcpy(last->name,num);
	 last->score=n;
	 last->next=NULL;
	 while(head->next!=NULL)
		 head=head->next;
	 head->next=last;
}
void sort(P head)
{
   P p,p1,t;
	p=head;
	p1=head->next;
	while(p->next!=NULL)
	{
		while(p1->next!=NULL)
		{
			if(p->next->score < p1->next->score )
			{
				t=p->next;
				p->next=p1->next;
				p1->next=p1->next->next;
				p->next->next=t;
			}
			else
			{
				p1=p1->next;
			}
		}
		p=p->next;
		p1=p->next;
	}
	p=head->next;
}
bool delate(P head,int x)//删除一个结点
{
	if(head->next==NULL||head==NULL) //是不是空表
		return false;
	P p=head->next;
	P q=head;    //找位置
    while(p!=NULL)
	{
		if(p->score==x)
		{
			q->next=p->next;
		    free(p);
			return true;
		}
	else   //没找到
	{
	   q=p;
	   p=p->next;
	}
	}
return false;
}
void show(P head)
{
  printf("sort message:\n");
  while(head->next)
  {
     head=head->next;
	 printf("%s %d\n",head->name,head->score);
  }
}
int main(void)
{
   int i;
   N a[M];
   P head=create();
   printf("input name and grade:\n");
   for(i=0;i<M;i++)
   {
     scanf("%s%d",a[i].name,&a[i].score);
	 input(head,a[i].name,a[i].score);
   }
    sort(head);
	delate(head,87);
    show(head);
	return 0;
}
