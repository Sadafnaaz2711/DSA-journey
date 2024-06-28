#include<iostream>

using namespace std;

void Printarray(int arr[],int size)
{
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    //declare
    int number[5]={1,2,45,68,74};

    //accessing the array
    cout<<number[0]<<endl;

    Printarray(number,5);
    return 0;
    
    
}