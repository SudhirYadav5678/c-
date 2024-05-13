#include<iostream>
using namespace std;
int main(){
    int n=6;
    printf("this is a n %d \n",n);
    int x=7;
    int y=x;
    int *pointers;
    pointers=&x;
    int &a=n;
    a=4; // this is going to change the value of n also after references with & sign 
    printf("this is a pointers %p \n",pointers);
    printf("this is a x %d\n",x);
    printf("this is a pointers %d \n",a);
    printf("this is a n %d \n",n);

    return 0;
}