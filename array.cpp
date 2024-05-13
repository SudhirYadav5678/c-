#include<iostream>
using namespace std;
int main()
{
    // int arr[6]={1,2,3,4,5,6};
    // cout<<arr<<endl;//going to print the value of memory
    // cout<<arr[0]<<endl;//print the position value
    // arr[0]=7;
    // cout<<arr[0]<<endl;
    // cout<<arr[3]<<endl;

    int otherArr[1];
    otherArr[0]=9;
    cout<<otherArr[0]<<endl;
    *otherArr=2;
    cout<<otherArr[0]<<endl;
    
    return 0;
}