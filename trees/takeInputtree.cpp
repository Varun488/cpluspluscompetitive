#include<bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode{
      public:
      T data;
      vector<TreeNode<T>*>childNode;

      TreeNode(T data){
          this->data=data;
      }
};

TreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter Data"<<endl;
    cin>>rootData;
    TreeNode<int>* root =new TreeNode<int>(rootData);
    int n;
    cout<<"Enter Number Of Child of "<<rootData<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        TreeNode<int>* child = takeInput();
        root->childNode.push_back(child);
    }
    return root;
}

void printTree(TreeNode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    for(int i=0;i<root->childNode.size();i++){
        cout<<root->childNode[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->childNode.size();i++){
        printTree(root->childNode[i]);
    }
}

int main(){
   
   TreeNode<int>* root = takeInput();
   printTree(root);
}