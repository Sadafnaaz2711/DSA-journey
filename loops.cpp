#include<iostream>

using namespace std;

int main(){
    //for {initialize; condition; increment}
    for (int i=0;i<10;i=i+1)
    {
        cout<<"hello"<<endl;
    }

    //while(condition)
    int i=0;
    while(i<5)
    {
        cout<<"hii"<<endl;
        i+=2; // i=i+2
    }

    //dowhile loop
    i=3;
    do{
        cout<<"i = 3"<<endl;
    }while(i>5);
}