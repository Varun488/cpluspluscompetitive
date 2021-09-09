#include<iostream>
using namespace std;

int main(){
     // declaration of an array
     int arr[5] ;
     // or 
     int arr1[5] = {1,2,3,4,5};   // inside curly brackets element of array
     // taking array as input from users
     int n; 
     cin>>n; 
     int a[n] ;
     for(int i=0;i<n;i++){
         cin>>a[i];
     }

     // giving array as an output
     for(int i=0; i<n;i++){
         cout<<a[i]<<endl;
     }
    
}