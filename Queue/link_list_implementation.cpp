#include<iostream>
using namespace std;

int size;
struct node
{
    int data;
    struct node *link;
    node(int data)
    {
        this->data=data;
        link=NULL;
    }
};
node *font=NULL;
node *rear=NULL;

// check node is empty or not
int isEmpty()
{
    if(font==NULL)
        return 1;
    else
        return 0;
}
// insert data in queue
// fun
void enQueue(int data)
{
    node *temp=new node(data);
    if(isEmpty())
       { font=rear=temp;}
    else
    {
        rear->link=temp;
        rear=temp;
    }
}
// delete node in queue
// fun
void deQueue()
{
    if(isEmpty())
        return;
    node *temp=font;
    font=font->link;
    delete(temp);
    if(isEmpty())
        rear=NULL;
}

// print data in queue 
// fun

void print()
{
    node *temp=font;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
}
int main()
{
    enQueue(44);
    enQueue(33);
    enQueue(22);
    enQueue(11);
    deQueue();
    deQueue();
    enQueue(44);
    enQueue(33);
    print();

    return 0;
}