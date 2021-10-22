//constructor is a permanenet member of class
#include<iostream>
using namespace std;

class test{
    public:
    test(){                        // name of constructor will be same as class name
        cout<<"hello";             
    }
};
int main(){
    test obj;                    // we dont need to call constructor will be invoked as soon as object is created

}