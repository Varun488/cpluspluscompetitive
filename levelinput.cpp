/*create a queue and place root Node in queue
take root out and ask children of root and place them in queue
and againtake first element of queue*/

#include<bits/stdc++.h>
using namespace std;

template<typename T>
class TreeNode{
      public:
      int data;
      vector<TreeNode<T>*>childNode;
      TreeNode(int data){
          this->data = data;
      }

};

TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data"<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() !=0){
        TreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        cout<<"enter number of children of "<<front->data<<endl;
        int numchild;
        cin>>numchild;
        for(int i=0;i<numchild;i++){
            int childData;
            cout<<"enter "<<i<<"th child of "<<front->data<<endl;
            cin>>childData;
            TreeNode<int>* child =new TreeNode<int>(childData);
            front->childNode.push_back(child);
            pendingNodes.push(child);
        }
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
     TreeNode<int>* root = takeInputLevelWise();
     printTree(root);
}