#include<iostream>

using namespace std;

int main(){
    int number;
    cout<<"enter the number";
    cin>>number;

    if(number%5==0 && number%3==0)
    {
        cout<<"Bang";
    }
    else if(number%5==0)
        {
            cout<<"Buzz";
        }
    else if(number%3==0)
        {
            cout<<"fizz";
        }
    else{
            cout<<"sad";
        }
        
        
// switch(number%3)
//     {
//     case 0:
//         cout<<"hello";
//         break;

//     case 1:
//         cout<<"hii";
//         break;
    
//     case 2:
//         cout<<"bye";
//         break;

    
//     default:
//         break;
//     }
    

// 
}