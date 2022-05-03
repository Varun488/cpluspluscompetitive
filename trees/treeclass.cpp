/*this file we will create a tree class 
we will create a node and inside that node we will address of children
node we will store children node in form of vector(because 
we don't have to mention size before creation)*/
#include<bits/stdc++.h>
using namespace std;
//template of class
template<typename T>  
//Tree class
class TreeNode {
    public:
    T data;
    vector<TreeNode<T>*> children;       // vector node
    TreeNode(T data){
        this->data = data;
    }
};
//print tree
void printTree(TreeNode<int>* root){
     //we will use recursion for printing tree
     if(root==NULL){                     //edge case not base case
         return;
     }
     cout<<root->data<<":";
     for(int i=0;i<root->children.size();i++){
         cout<<root->children[i]->data<<",";
     }
     cout<<endl;
     for(int i=0;i<root->children.size();i++){
         printTree(root->children[i]);
     }
}
//main function
int main(){
    TreeNode<int>* root = new TreeNode<int>(1);
    TreeNode<int>* Node1 = new TreeNode<int>(2);
    TreeNode<int>* Node2 = new TreeNode<int>(3);
    root->children.push_back(Node1);
    root->children.push_back(Node2);
    printTree(root);
}