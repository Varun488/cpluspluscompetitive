// CPP PROGRAM TO DEMONSTRATE ARRAY STL FUNCTIONS , ALGORITHMS AND CONTAINER.
#include<iostream>
//include array functions
#include<array>
#include<algorithm>
#include<iterator>
#include<string>
using namespace std;

int main(){
   //declaring array
   //doble braces required
   array<int,5> arr1{{1,9,5,8,3}};
   //or
   array<int,5> arr2 = {1,3,6,2,4};
   // declaring array of string
   array<string,2> arr3 ={{string("a"),("b")}};
   // .size function will return size of your array
   cout<<"sizes of array"<<endl;
   cout<<arr1.size()<<"\n";
   cout<<arr2.size()<<"\n";
   cout<<arr3.size()<<"\n";

   // printing full array
   cout<<"array1"<<"\n";
   for (auto i : arr1){
         cout<<i<<" ";
      }

    // for sorting array
    sort(arr1.begin(), arr1.end());
    cout<<"\nsorted arr1 : ";
    for(auto i : arr1){
        cout<<i<<" ";
    }
    //filling arr2 with 10
    arr2.fill(10);
    cout<<"\nfilled arr2 : ";
    for(auto i : arr2){
        cout<<i<<" ";
    }
    cout<<"\n";
    //member functions for array template are as follows
    //character array
    array<char,3> arr = {'G','F','G'};
    cout<<arr[0]<<" "<<arr[2]<<"\n";
    /* these function are used to access the first and last element
      of array  */
    cout<<arr.front()<<" "<<arr.back()<<"\n";
    /*if arr was int instead of char than front() and back()
    function will return ascii value of G.
    */
   
   //swap function used to content of two array
   array<char,3> ar={'M','G','S'};
   ar.swap(arr);
   cout<<ar.front()<<endl;

   // empty function
   cout<<ar.empty()<<"\n";  //it will return 0 if ar is not empty
  // at function use to access element at specific location
  cout<<arr.at(2)<<" "<<arr1.at(3)<<endl;

  //size() max_size() and sizeof()
  cout<<arr.size()<<'\n';   // return total number of indexes
  cout<<arr.max_size()<<"\n";  // return total number of indexes
  cout<<sizeof(arr); // total size of array
  
    return 0;

}

