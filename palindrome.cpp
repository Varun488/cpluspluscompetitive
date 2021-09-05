#include<iostream>
using namespace std;
int manin(){
     int x,n;
     long long rev=0;
     cin>>x;
     if(x<0){
     return false;
     }
     while(x!=0){
         n=x%10;
       rev= n +(rev*10);
       x=x/10;
     }
     return rev;
     if(x==rev){
         return true;
     }else false;
    return 0;
}