// Queue array implementation

#include<iostream>
using namespace std;
int font=0,pos=0;
const int cap=5;
int arr[cap];

int isEmpty()
{
    if(pos==0)
        return 1;
    else
        return 0;
}

int isFull()
{
    if(pos==cap)
        return 1;
    else
        return 0;
}

int getFont()
{
    if(isEmpty())
        return -1;
    else
        return font;
}
int getRear()
{
    if(isEmpty())
        return -1;
    else
        return (font+pos-1)%cap;
}
void inQueue(int data)
{
    if(isFull())
        return;
    int rear = getRear();
    rear=(rear+1)%cap;
    arr[rear]=data;
    pos++;
}
int deQueue()
{
    if(isEmpty())
        return 0;
    int data=arr[font];
    font=(font+1)%cap;
    pos--;
    return data;
}
void print()
{
    if(isEmpty())
    {
        return;
    }
    int rear=getRear();
    cout<<endl;
    for(int i=font; i<=rear; i++)
    {
        cout<<arr[i] <<" ";
    }
    cout<<endl;
}
int main()
{
    inQueue(4);
    inQueue(3);
    inQueue(2);
    inQueue(1);
    inQueue(0);
    print();
    deQueue();
    deQueue();
    print();
    inQueue(111);
    print();
    deQueue();
    print();
    return 0;
}