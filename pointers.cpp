#include<iostream>
using namespace std;
int main(){
    int n=6;
    int x=7;
    int y=x;
    int arr[7]={1,2,3,4,5,6};
    int *pointers;
    pointers=arr;
    int *ypointers;
    ypointers=&y;
    x=*ypointers;// pointers dereference
    printf("this is a pointers %p \n",pointers);
    printf("this is a pointers %d",x);

    return 0;
}