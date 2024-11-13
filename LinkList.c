#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;

void create_node(int size)
{
    struct node *temp;
    struct node *ptr;
    for(int i=0;i<size;i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        printf("\n");
        printf("Enter element on %d node :- ",i+1);
        scanf("%d",&(temp->data));
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            ptr=head;
            while(ptr->next != NULL)
                ptr=ptr->next;
            ptr->next=temp;
        }
    }
}
void insert_at_first_index()
{
    struct node temp=(struct node)malloc(sizeof(struct node));
    printf("\nEnter Element at node :- ");
    scanf("%d",&temp->data);
    temp->next=head;
    head=temp;
}
void display()
{
    struct node *ptr=head;
    printf("\nDisplay list \n\n");
    while(ptr !=NULL)
    {
        printf("[%d] ",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    int size,ch;
    while(1)
    {
        printf("\n");
        printf("\n 1 CREATE NODE ");
        printf("\n 2 INSERTION AT FIRST INDEX ");
        printf("\n 3 Display ");
        printf("\n 4 EXIT.......");
        printf("\n\n Enter choice :- ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter number of nodes do you want to create :- ");
            scanf("%d",&size);
            create_node(size);
            break;
        case 2:
            insert_at_first_index();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            printf("ENTER VALID CHOICE....");
        }
    }

}