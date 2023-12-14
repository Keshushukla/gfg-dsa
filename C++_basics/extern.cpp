#include<iostream>
using namespace std;

extern int x;//external linkage to variable x. allows us to access global variable initialized and declared below.

int main(){
    cout << x << endl;
    return 0;
}
int x = 10;