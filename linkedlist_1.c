#include<stdio.h>
#include<stdlib.h>

struct node
{
   int id;
   struct node* next;
};

struct node *head=NULL;

void create_new_node(int id);
void display(void);


int main()
{
   create_new_node(2);
   create_new_node(5);
   create_new_node(7);
   create_new_node(9);
   display();  
}

void create_new_node(int id)
{
    struct node *new=NULL,*temp=NULL;
    new = (struct node*)malloc(sizeof(struct node));
    new->id = id;
    new->next = NULL;
    if(head==NULL)
    { 
        head=new;	    
    }
    else
    {
        temp=head;
	while(temp->next!=NULL)
	{
           temp = temp->next;
	}
	temp->next=new;
    }
}

void display(void)
{
   struct node *T=head;
   while(T!=NULL)
   {
       printf("%d ",T->id);
       T=T->next;
   }
   printf("\n");
}

