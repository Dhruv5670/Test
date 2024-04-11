#include<stdio.h>
#include<stdlib.h>
struct student
{
	int rollno;
	char name[10];
	float marks;
	struct student *next;
};
void add_begin(struct student **);
void print_node(struct student *);
int count_node(struct student *);

void main()
{
	int op,c=0;
	struct student *hp=0;

	while(1)
	{
		printf("enter the op\n 1) add_begin\n 2)print_node\n3)count_node\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1 : add_begin(&hp);
				 break;

			case 2 : print_node(hp);
				 break;

			case 3 : c=count_node(hp);
				 printf("present node=%d\n",c);
				 break;
			case 4 : exit(0);
		
			default : printf("enter the proper input\n");			
		}
	}
}
void add_end(struct student **ptr)
{
	if(*ptr==0)
	{
		printf("node is not present\n");
		return;
	}
	
	while(


}
void add_begin(struct student **ptr)
{
	struct student *new;
	new=malloc(sizeof(struct student));

	printf("enter the rollno name marks\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->marks);

	new->next=*ptr;
	*ptr=new;
}
void print_node(struct student *ptr)
{
	if(ptr==0)
	{
		printf("record not found\n");
	}
	while(ptr->next)
	{
		printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
}
int count_node(struct student *ptr)
{
	int c=0;

	while(ptr->next)
	{
		c++;
		ptr=ptr->next;
	}
	return c;
}
