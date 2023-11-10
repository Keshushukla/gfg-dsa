#include<typeinfo>
#include<iostream>
using namespace std;

int main(){
    auto a = 10;
    auto b = 15.5;

    cout<<typeid(a).name() << endl;
    cout<<typeid(b).name();

}