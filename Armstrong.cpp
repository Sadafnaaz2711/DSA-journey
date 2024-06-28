#include<iostream>
#include <math.h>
using namespace std;

int countdigit(int n)
{
    int count=0;
    while(n)
    {
        count++;
        n/=10;
    }
    return count;
}

bool armstrong(int num,int digit)
{
    int rem,ans=0,n=num;
    while(n)
    {
        rem=n%10;
        n/=10;
        ans=ans+pow(rem,digit);
    }
    if(num==ans)
    return 1;
    else
    return 0;
}
int main()
{
    int num;
    cout<<"enter the number";
    cin>>num;
    int digit=countdigit(num);
    cout<<armstrong(num,digit);
    return 0;
}