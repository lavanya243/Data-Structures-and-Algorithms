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
    int mid;
    int l=0;
    int u=n-1;
    while(l<=u)
    {
        mid=(u+l)/2;
        if(a[mid]<key)
        {
            l=mid+1;
        }
        else if(a[mid]>key)
        {
            u=mid-1;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    cout<<"Item found at position"<<mid;
    else
    cout<<"Search unsuccessful";
    return 0;
}