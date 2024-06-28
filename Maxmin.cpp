#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int num[],int n)
{
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        // if(num[i]>max)
        // {
        //     max=num[i];
        // }
        maxi=max(maxi,num[i]);
    }
    return maxi;
}

int getMin(int num[],int n)
{
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(num[i]<min)
        {
            min=num[i];
        }
    }
    return min;
}
int main()
{
    int size;
    cout<<"enter the size of array";
    cin>>size;
    int num[100];

    //taking input in array
    cout<<"Enter the array";
    for(int i=0;i<size;i++)
    {
        
        cin>>num[i];
    }
    cout<<"Maximum valus"<<getMax(num,size)<<endl;
    cout<<"Minimun value"<<getMin(num,size)<<endl;
    return 0;

}
