#include <iostream>
using namespace std;
int main()
{
  int arr[5]={12,23,1,6,99};
  int max1,max2;
  max1=max2=0;
  for(int i=0;i<5;i++)
  {
    if (arr[i]>max1)
    {
        max2=max1;
        max1=arr[i];
    }
    if(arr[i]>max2 && arr[i]<max1)
    max2=arr[i];
  }
  cout<<max2;
    return 0;
}