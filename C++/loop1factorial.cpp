#include<iostream>
using namespace std;
int main() {
    int i; int n;
    int fac = 1;

    cout <<"Enter the value of n";
    cin>>n;
    cout<<" ";
    for(i=1;i<=n;i++) {
       fac = fac*i ;
    }
    cout <<fac; 

  return 0;     
}