// syntax:

// switch(integer expression) {
//     case 1:
//     ************
//     ************
//     break;

//     case 2:
//     ******* 
//     *******
//     ** 
//     **
//     **
//     **
//     break;

//     default :
//     ***
//     ****
//     *****
//     ******
// }
#include<iostream>
using namespace std;
int main() {
    int a,b,c,n;
    do{
        cout<<"Addition\n";
        cout<<"Substraction\n";
        cout<<"Enter your choice";
        cin>>n;

    switch(n) {
        case 1 :
        cout<<"enter two numbers";
        cin>>a>>b;
        c = a+b;
        cout<<"the sum is :"<<c;
        break;
         
        case 2 :
        cout<<"enter two numbers";
        cin>>a>>b;
        c = a-b;
        cout<<"the substraction is :"<<c<<"\n";
        break;
    }
    }
        
        while(n<3); 
        
        return 0;
    }


