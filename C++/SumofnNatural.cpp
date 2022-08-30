#include<iostream>
using namespace std;
int main() {
    int i; int n;
    int sum = 0;

    cout <<"Enter the value of n";
    cin>>n;
    cout<<" ";
    for(i=1;i<=n;i++) {
       sum = sum+i ;
    }
    cout <<sum; 

  return 0;     
}