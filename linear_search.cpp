#include<iostream>
using namespace std;
int main()
{
    int n;
    int i,flag=0,key;
    cout<<"Enter the size of the array \n";
    cin>>n;
    int a[n];
    cout<<"Enter the elements in the array \n";
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the search element \n";
    cin>>key;
    for(i=0;i<n;++i)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
    }
   if(flag)
		cout<<"\n Search Successful ";
	else
		cout<<"\n Search unsuccessful";
    return 0;
}