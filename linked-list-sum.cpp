#include<iostream>
#include<stdlib.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
class List: public Node
{
    Node *first,*last;
    public :
    List()
    {
        first = NULL;
        last = NULL;
    }
    void create();
    void sum();
    void display();
};
void List::create()
{
    Node *tmp;
    tmp=new Node;
    int n;
    cout<<"\n ENTER AN ELEMENT : \n";
    cin >> n;
    tmp->data=n;
    tmp->next=first;
    if(first==NULL)
    {
        first=tmp;
        last=first;
    }
    else
    {
        last->next=tmp;
        last=tmp;
    }
}
void List::sum()
{
    Node *tmp=first;
    int s;
    while(tmp!=NULL)
    {
        s+=tmp->data;
        tmp=tmp->next;
    }
    cout<<" \n SUM = "<<s;
}
void List::display()
{
    Node *tmp=first;
    if(tmp==NULL)
    {
        cout<<"\n LIST IS EMPTY \n";
    }
    while(tmp!=NULL)
    {
        cout<<tmp->data;
        cout<<"-->";
        tmp=tmp->next;
    }
    cout<<"NULL";
}
int main()
{
    List l;
    int ch;
    while(1)
    {
        cout<<"\n MENU ";
        cout<<"\n1 CREATE \n2 SUM OF ELEMENTS \n3 DISPLAY \n4 EXIT \n";
        cout<<"Enter your choice \n";
        cin>>ch;
        switch(ch)
        {
            case 1:
            l.create();
            break;
            case 2:
            l.sum();
            break;
            case 3: 
            l.display();
            break;
            case 4:
            return 0;
        }
    }
    return 0;
}