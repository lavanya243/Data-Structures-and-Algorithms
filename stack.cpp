#include<iostream>
#include<stdlib.h>
#define max 10
using namespace std;
class stack1
{
    public:
    int sp;
    int st[max];
    stack1()
    {
        sp=-1;
    }
    void push(int);
    void pop();
    void display();
};
void stack1::push(int a)
{
    if(sp>=max-1)
    {
        cout<<"STACK OVERFLOW \n";
        return;
    }
    else
    {
        st[++sp]=a;
        cout<<a<<" INSERTED SUCCESSFULLY! \n";  
    }
}
void stack1::pop()
{
    if(sp<0)
    {
        cout<<"STACK UNDERFLOW \n";
        return;
    }
    else
        cout<<st[sp--]<<" DELETED SUCCESSFULLY!  \n";   
}
void stack1::display()
{
    if(sp<0)
        {
            cout<<"STACK EMPTY!  \n";
            return;
        }
    else
    {   
        for(int i=sp;i>=0;i--)
            cout<<st[i]<<"\n";
    }
}
int main()
{
    stack1 s;
    int n;
    int ch;
    while(1)
    {
        cout<<"STACK OPERATIONS: \n1. PUSH \n2. POP \n3. DISPLAY \n4. EXIT \n ENTER YOUR CHOICE:  ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            cout<<"Enter an element \n";
            cin>>n;
            s.push(n);
            break;
            case 2:
            s.pop();
            break;
            case 3:
            s.display();
            break;
            case 4:
            return 0;
        }
    }
    return 0;
}

