Given a Binary Search Tree and two integers k1 and k2, find and print the elements which are in range k1 and k2 (both inclusive).
Print the elements in increasing order.



/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/

void elementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2) {
	if(root==NULL){
        return;
    }
    
    if(root->data<k1){
        elementsInRangeK1K2(root->right,k1,k2);
    }else if(root->data>k2){
        elementsInRangeK1K2(root->left,k1,k2);
    }else if(root->data==k1){
        cout<<root->data<<" ";
        elementsInRangeK1K2(root->right,k1,k2);
    }else if(root->data==k2){
        elementsInRangeK1K2(root->left,k1,k2);
        cout<<root->data<<" ";
    }else if(root->data>k1 && root->data<k2){
        elementsInRangeK1K2(root->left,k1,k2);
        cout<<root->data<<" ";
        elementsInRangeK1K2(root->right,k1,k2);
    }
}
