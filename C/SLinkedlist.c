#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}L;

L *insertatbeg(L *head,int data)
{
    L *newnode=(L*)malloc(sizeof(L));
    newnode->data=data;
    newnode->next=head;
    head=newnode;
    return head;
}

L *insertatend(L *head,int data)
{
    L *newnode=(L*)malloc(sizeof(L));
    L *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->data=data;
    newnode->next=NULL;
    return head;
}

L *insertatpos(L *head,int data,int pos)
{
    L *newnode=(L*)malloc(sizeof(L));
    newnode->data=data;
    newnode->next=NULL;
    if(pos==1)
    {
        newnode->next=head;
        head=newnode;
        return head;
    }
    L *temp=head;
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    return head;
}

L *deleteatbeg(L *head)
{
    L *temp=head;
    head=head->next;
    free(temp);
    return head;
}

L *deleteatend(L *head)
{
    L *temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
    return head;
}

L *deleteatpos(L *head,int pos)
{
    L *temp=head;
    if(pos==1)
    {
        head=head->next;
        free(temp);
        return head;
    }
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    L *temp2=temp->next;
    temp->next=temp->next->next;
    free(temp2);
    return head;
}

int main()
{
    L *head=NULL;
    head=insertatbeg(head,10);
    head=insertatend(head,20);
    head=insertatpos(head,30,2);
    head=deleteatbeg(head);
    head=deleteatend(head);
    head=deleteatpos(head,2);
    L *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}

