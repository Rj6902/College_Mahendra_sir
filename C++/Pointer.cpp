#include<iostream>
using namespace std;
int main() {
    int *z;
    int a=5;
    z = &a;
    cout<<&a<<endl;  //*z  is the pointer
    cout<<"a = "<<*z;  //a & *z are the value stored in the pointeruyh
    cout<<"\na = "<<a<<endl; //&a is z i.e. address of pointer
    cout<<z<<endl; //
    z =z +5;
    cout<<z<<endl;
    cout<<sizeof(int);

}