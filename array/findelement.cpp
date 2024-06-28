#include<iostream>

using namespace std;
bool found(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(key==arr[i])
        {
            return true;
        }
    }
    return false;
}
int main()
{

    int arr[5]={5,7,9,6,3};
    int element;
    cout<<"plz enter the element you want to find"<<endl;
    cin>>element;

    bool answer =found(arr, 5, element); // Correct function call
    if (answer) {
        cout << "Element found." << endl;
    } else {
        cout << "Element not found." << endl;
    }
    return 0;

}