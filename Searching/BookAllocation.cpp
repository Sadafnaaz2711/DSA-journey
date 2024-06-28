#include<iostream>

using namespace std;

bool Ispossible(int arr[],int n,int m,int mid)
{
    int studencount=1;
    int pagesum=0;

    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            studencount++;
            if(studencount>m || arr[i]>mid)
            {
                return false;
            }
            pagesum=arr[i];
        }
    }
    return true;
}
int allocatebooks(int arr[],int n,int m)
{
    int s=0;
    int sum=0;
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    
    while (s<=e)
    {
       if(Ispossible(arr,n,m,mid))
       {
        ans=mid;
        e=mid-1;
       }
       else{
        s=mid+1;
       }
       mid=s+(e-s)/2;
    }
    return ans;
    
}
int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 2; // Number of students

    int result = allocatebooks(arr, n, m);
    cout << "The minimum number of pages allocated to the student with the maximum number of pages is: " << result << endl;

    return 0;
}