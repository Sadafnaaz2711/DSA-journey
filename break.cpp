#include<iostream>

using namespace std;

int main()
{   //give number is a prime or not
    int num;
    cin>>num;
    int i;
    // for(i=2;i<num;i++)
    // {
    //     if(num%i ==0)
    //     {
    //         cout<< "not prime";
    //         break;
    //     }
    // }
    // if(i==num)
    // {
    //     cout<<"prime";
    


    for(i=2;i<num;i++)
    {
        if(i%2 !=0)
        {
            continue;
        }
        cout<<i<<" ";
    }
}