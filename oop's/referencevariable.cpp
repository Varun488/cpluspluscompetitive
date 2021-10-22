#include<iostream>
using namespace std;
int main(){
    int x=5;
    int &y =x;
    cout<<y<<endl;
    y = 10;
    cout<<x<<endl;
    return 0;
}
