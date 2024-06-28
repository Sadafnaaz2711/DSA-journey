#include<iostream>
using namespace std;
int factorial(int num)
{
    int count=0;
    while(num>=5)
    {
        count=count+num/5;
        num /=5;
    }
    return count;
    
}
int main()
{
    int num;
    cin>>num;
    cout<<factorial(num);
    return 0;

}