#include<iostream>
using namespace std;
int sum(int arr[],int size)
{
    int total=0;
    for(int i=0;i<size;i++)
    {
        total=total+arr[i];
    }
    return total;
}


int main(){
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

    int totalsum=sum(num,size);
    cout<<totalsum;
    return 0;

}