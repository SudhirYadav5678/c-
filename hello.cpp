#include<iostream>

using namespace std;
void suhdir(){
    cout <<"hello suhdir this is a function call\n";
    std::cout<<"SudhirYadav" <<std::endl; // to remove the std:: we are using namespace std::
    return;
}
int main(){
    cout <<"hello \n";
    puts("HelloSudhir");
    suhdir();
    return 0;
}