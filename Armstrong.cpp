#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=n;
    int sum=0;
    while(n!=0)
    {
        int last=n%10;
        sum+=pow(last,3);
        n/=10;
    }
    if(sum==a)
        cout<<"Armstrong Number! ";
    else
        cout<<"Not Armstrong Number! ";
    return 0;
}
