#include<iostream>
#include<stdlib.h>
using namespace std;
#define max 5
class queue
{
    public:
    int front,rear;
    int a[max];
    queue()
    {
        front=-1;
        rear=-1;
    }
    void add(int);
    void del();
    void display();
};
void queue::add(int item)
{
    if(rear==max-1)
    {
        cout<<"\n QUEUE IS FULL! \n";
        return;
    }
    else
    a[++rear]=item;
}
void queue::del()
{
    if(front==rear)
    {
        cout<<"\n EMPTY QUEUE! \n";
        return;
    }
    else
    cout<<a[++front]<<" deleted successfully \n";
}
void queue::display()
{
    if(front==rear)
    {
        cout<<"\n EMPTY QUEUE! \n";
        return;
    }
        else
        {
            for(int i=front+1;i<=rear;i++)
            cout<<a[i]<<"  ";
        }
}
int main()
{
    queue q;
    int n;
    int ch;
    while(1)
    {
        cout<<" \n QUEUE OPERATIONS  : \n1. ADD\n2. DELETE \n3. DISPLAY\n4. EXIT \n ENTER YOUR CHOICE \n";
        cin>>ch;
        cout<<"************************************************************\n";
        switch(ch)
        {
            case 1:
            cout<<"Enter an element : ";
            cin >> n;
            q.add(n);
            break;
            case 2:
            q.del();
            break;
            case 3:
            q.display();
            break;
            case 4:
            return 0;
        }
    }
    return 0;
}