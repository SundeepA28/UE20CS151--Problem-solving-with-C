#include<stdio.h>
#include<stdlib.h>
#include<string.h>
				//structure used to store th edetails and priority
typedef struct component
{
	char details[20];
	int priority;
}compo;
				//used for linking
struct node
{
	compo c;
	struct node *link;
};
typedef struct node node_t;
struct priority_queue
{
	node_t *head;
};
typedef struct priority_queue prio_Q;

void init(prio_Q* b);
void EQ(prio_Q* b,compo* com);
void DQ(prio_Q* b);
void disp(const prio_Q* b);
int main()
{
	prio_Q q;
	init(&q);
	compo c;
	printf("Enter your choice 1.insert 2.delete 3.disp 4.exit\n");
	int choice;
	scanf("%d",&choice);
	do{
		switch(choice){
			case 1: printf("Enter data and priority : ");
				scanf("%s %d",c.details,&c.priority);
				EQ(&q,&c);
				break;
			case 2: DQ(&q);
				break;
			case 3: disp(&q);
				break;
			default: return 0;
		}
		printf("Enter your choice 1.insert 2.delete 3.disp 4.exit\n");
		scanf("%d",&choice);
	}while(choice!=4);
	return 0;
}
					//initialization
void init(prio_Q* b)
{
	b->head=NULL;
}
					//enqueue
void EQ(prio_Q* b,compo* com)
{
	node_t* temp=(node_t*)malloc(sizeof(node_t));
	strcpy(temp->c.details,com->details);
	temp->c.priority=com->priority;
	temp->link=b->head;
	b->head=temp;
}
					//Dequeue
void DQ(prio_Q* b)
{
	if(b->head==NULL)
		printf("NO elements to delete\n");
	else
	{
		node_t* present=b->head;
		node_t* prev=NULL;
		int max=0;
		node_t* prev_max=NULL;
		while(present!=NULL)
		{
			if(present->c.priority>=max)
			{
				max=present->c.priority;
				prev_max=prev;
			}
			prev=present;
			present=present->link;
		}
		compo co;
		if(prev_max!=NULL)
		{
			node_t* temp=prev_max->link;
			prev_max->link=temp->link;
			strcpy(co.details,temp->c.details);
			co.priority=temp->c.priority;
			free(temp);
		}
		else
		{
			node_t* temp=b->head;
			b->head=b->head->link;
			strcpy(co.details,temp->c.details);
			co.priority=temp->c.priority;
			free(temp);
		}
		printf("Deleted node details is %s with %d priority\n",co.details,co.priority);
	}
}
			//Display
void disp(const prio_Q* b)
{
	node_t* p=b->head;
	if(p==NULL)
		printf("No elements in queue\n");
	else
	{
		while(p!=NULL)
		{
			printf("%s %d\n",p->c.details,p->c.priority);
			p=p->link;
		}
	}
}