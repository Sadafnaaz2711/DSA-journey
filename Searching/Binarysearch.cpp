#include<iostream>
using namespace std;

int Binarysearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;

    while(start<=end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }

        //go to right side
        if(key >arr[mid])
        {
            start=mid+1;

        }
        else{
            end=mid-1;
        }
        mid= start+(end-start)/2;
    }
    return -1;
}

int main()
{
    int even[6]={5,10,15,20,25,30};
    int odd[5]={12,14,16,18,20};

    int evenindex = Binarysearch(even,6,5);
    cout<<"Index of 5 is"<<evenindex<<endl;

    int oddindex = Binarysearch(odd,5,20);
    cout<<"Index of 20` is"<<oddindex;

    return 0;
}