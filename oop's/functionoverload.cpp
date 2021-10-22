
#include<iostream>
using namespace std;
class test{
    public:
    void x(int x){                              // overloaded function which have same name and have different arguments 
        cout<<"hello"<<endl;
    }
    void y(float y){
        cout<<"namaste";                      
    }
};

int main(){
   test obj;
   test obj;
   obj.x(5);
   obj.y(2.0);

    return 0;
}