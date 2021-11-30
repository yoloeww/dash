# include<stdio.h>
# include<stdlib.h>
# include<malloc.h>
# include<string.h>
# define M 3
typedef struct student
{
    char name[20];
	int score;
	struct student *next;
}N,*P;
P create(void)
{
  P head;
  head=(P)malloc(sizeof(N));
  if(head==NULL)
  {
	  printf("error\n");
	  exit(-1);
  }
  head->next=NULL;
  return head;
}
void input(P head,char names[100],int grade)
{
     P last;
	 last=(P)malloc(sizeof(N));
	 if(last==NULL)
	 {
		 printf("error\n");
		 exit(-1);
	 }
	 last->score=grade;
	 strcpy(last->name,names);
	 last->next=NULL;
	 while(head->next!=NULL)
		 head=head->next;
	 head->next=last;
}
void sort(P head)
{
    P a,b,t;
	a=head;
	b=head->next;
	while(a->next!=NULL)
	{
	    while(b->next!=NULL)
		{
		    if(a->next->score<b->next->score)
			{
			    t=a->next;
				a->next=b->next;
				b->next=b->next->next;
				a->next->next=t;
			}
			else
			{
			    b=b->next;
			}
		}
		a=a->next;
			b=a->next;
	}
	a=head->next;
}
void show(P head)
{
  printf("sort message:\n");
  while(head->next!=NULL)
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
	//delate(head,87);//
    show(head);
	return 0;
}
 