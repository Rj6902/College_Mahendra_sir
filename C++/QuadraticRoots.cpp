#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int b,a,c; 
    float r1 ,r2 ,d;
    cout<<"Enter the value of a,b,c :";
    cin>> a>>b>>c;
  
    d = (b*b) - (4*a*c);
    if(d > 0) {
       r1 = (-b + sqrt(d) ) / (2*a) ;
       r2 = (-b - sqrt(d) ) / (2*a) ;
       cout<<"Roots are real and not equal";
       cout<<r1<<endl;
       cout<<r2<<endl;
    }

    
    else if(d == 0) {
       r1 = (-b ) / (2*a) ;
       r2 = (-b ) / (2*a) ;
       cout<<"Roots are real and equal"<<endl;
       cout<<r1<<endl;
       cout<<r2<<endl;
    }


    //(d < 0)
    else {
       r1 = (-b  / (2*a)) ;
       r2 = (sqrt(-d)) / (2*a) ;       
       cout<<"Root1 :"<<r1<<"+i"<<r2<<endl;
       cout<<"Root2 :"<<r1<<"-i"<<r2<<endl;
       

    
    }
return 0;

}