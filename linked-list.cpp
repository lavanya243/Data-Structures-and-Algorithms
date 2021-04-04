#include<iostream>
#include<stdlib.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
class list : public Node
{
    Node *first,*last;
    public:
    list()
    {
        first=NULL;
        last=NULL;
    }
    void create(); 
    void insert();
    void dele();
    void lseacrch();
    void sum();
    void display();
};
void list::create()
{
    Node *temp;
    temp=new Node;
    int n;
    cout<<"\n ENTER AN ELEMENT \n";
    cin >> n;
    temp->data =n;
    temp->next=NULL;
    if(first==NULL)
    {
        first=temp;
        last=first;
    }
    else
    {
        last->next=temp;
        last=temp;
    }
}
void list::insert()
{
    Node *temp;
    temp=new Node;
    Node *prev,*cur;
    prev=NULL;
    cur=first;
    int count=1,pos,ch;
    int n;
    cout<<"\n ENTER AN ELEMENT \n";
    cin >> n;
    temp->data =n;
    temp->next=NULL;
    cout<<"INSERT - \n1. IN THE BEGINNING \n2. IN THE END \n3. IN THE MIDDLE \n ENTER YOUR CHOICE \n";
    cin>>ch;
    switch(ch)
    {
        case 1:
        temp->next=first;
        first=temp;
        break;
        case 2:
        last->next=temp;
        last=temp;
        break;
        case 3:
        cout<<"Enter the position \n";
        cin>>pos;
        while(count!=pos)
        {
            prev=cur;
            cur=cur->next;
            count++;
        }
        if(count==pos)
        {
            prev->next=temp;
            temp->next=cur;
        }
        else
        cout<<"NOT ABLE TO INSERT";
        break;
    }

}
void list :: dele()
{
    Node *prev=NULL,*cur=first;
    int count=1,ch,pos;
    cout<<"\n DELETE \n1. FIRST NODE \n2. LAST NODE \n3. MIDDLE NODE \n";
    cout<<"Enter your choice \n";
    cin>>ch;
    switch(ch)
    {
        case 1:
        if(first!=NULL)
        {
            cout<<"\n Deleted element is "<<first->data;
            first=first->next;
        }
        else
        cout<<"NOT ABLE TO DELETE";
        break;
        case 2:
        while(cur!=last)
        {
            prev=cur;
            cur=cur->next;
        }
        if(cur==last)
        {
            cout<<"/n DELETED ELEMENT IS: "<<cur->data;
            prev->next=NULL;
            last = prev;
        }
        else
        cout<<"\n NOT ABLE TO DELETE";
        break;
        case 3:
        cout<<"\n ENTER THE POSITION OF DELETION  \n";
        cin>>pos;
        while(count!=pos)
        {
            prev=cur;
            cur=cur->next;
            count++;
        }
        if(count==pos)
        {
            cout<<"/n DELETED ELEMENT "<<cur->data;
            prev->next=cur->next;
        }
        else
        cout<<"/n NOT ABLE TO DELETE";
    }
}
void list::display()
{
    Node *temp=first;
    if(temp==NULL)
    cout<<"\n LIST IS EMPTY \n";
    while(temp!=NULL)
    {
        cout<<temp->data;
        cout<<"-->";
        temp=temp->next;
    }
    cout<<"NULL";
}
void list::lseacrch()
{
    int s,f=0;
    Node *temp=first;
    cout<<"ENTER THE ELEMENT TO BE SEARCHED \n";
    cin>>s;
    while(temp!=NULL)
    {
        if(temp->data==s)
        {
            f=1;
            break;
        }
        temp=temp->next;
    }
    if(f==1)
    cout<<"SEARCH SUCCESSFUL \n";
    else
    cout<<"SEARCH UNSUCCESSFUL \n";

}
void list::sum()
{
    int s=0;
    Node *temp=first;
    while(temp!=NULL)
    {
        s+=temp->data;
        temp=temp->next;
    }
    cout<<"SUM OF ALL THE ELEMENTS IN THE LINKED LIST : "<<s<<" \n";
}
int main()
{
    list l;
    int ch;
    while(1)
    {
        cout<<"\n MENU";
        cout<<"\n1. CREATE \n2. INSERT \n3. DELETE \n4. SEARCH \n5. DISPLAY \n6. SUM OF ELEMENTS \n7. EXIT \n";
        cout<<"\n ENTER YOUR CHOICE \n";
        cin>>ch;
        switch(ch)
        {
            case 1:
            l.create();
            break;
            case 2:
            l.insert();
            break;
            case 3:
            l.dele();
            break;
            case 4:
            l.lseacrch();
            break;
            case 5:
            l.display();
            break;
            case 6:
            l.sum();
            break;
            case 7:
            return 0;
        }
    }
    return 0;
}