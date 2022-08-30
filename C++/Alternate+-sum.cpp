#include<iostream>
using namespace std;
int main() {
    int i; int n;
    int sum = 0; int sum1 = 0; int sum2 = 0;

    cout <<"Enter the value of n";
    cin>>n;
    cout<<" ";
    for(i=1;i<=n;i=i+2) {
       sum1 = sum1+i ; 

    }


     for(i=2;i<=n;i=i+2) {
       sum2 = sum2+i ;
    }

    sum = sum1 - sum2;
    cout <<sum ; 

  return 0;     
}
