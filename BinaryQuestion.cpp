//First and last occurrence in sorted array
#include<iostream>

using namespace std;

int FirstOcc(int arr[],int size,int key)
{
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]==key)
        {
            ans= mid;
            e=mid-1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int LastOcc(int arr[],int size,int key)
{
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]==key)
        {
            ans= mid;
            s=mid+1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int even[8]={1,2,3,3,3,3,3,5};
    cout<<"first occurance of 3 is "<<FirstOcc(even,8,3)<<endl;
    cout<<"last occurance of 3 is "<<LastOcc(even,8,3)<<endl;
    int totalocc=(LastOcc(even,8,3)-FirstOcc(even,8,3))+1;
    cout<<"Total no of occurance "<<totalocc;

    return 0;
}