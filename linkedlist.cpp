#include<iostream>
using namespace std;

class node{
     public:
     int data;
     node* next;

     node(int val){
          data = val;
          next = NULL;
     }
     ~node(){
          int val=this->data;
          if(this->next!=NULL){
               delete next;
               this->next=NULL;
          }
          cout<<"node of value deleted "<<val<<endl;
     }
};

void insertAtHead(node* &head, int val){
     node* n = new node(val);
     
     n->next = head;
     head=n;
}
void insertAtPos(node* &head,int pos,int val){
     if(pos==1){
          insertAtHead(head,val);
          return;
     }
     node* temp=head;
     int count=1;
     while(count<pos-1){
          temp=temp->next;
          count++;
     }
     node* n = new node(val);
     n->next=temp->next;
     temp->next=n;
}
void deletefromlist(node* &head,int pos){
       if(pos==1){
            node* temp=head;
            head=temp->next;
            temp->next=NULL;
            delete temp;
       }
       else{
            node* curr=head;
            node* prev= NULL;
            int count=1;
            while(count<pos){
                 prev=curr;
                 curr=curr->next;
                 count++;
            }
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
       }
}

void insertAtTail(node* &head, int val){
     node* n = new node(val);
     if(head==NULL){
          head=n;
          return;
     }
     node* temp= head;
     while(temp->next!=NULL){
          temp = temp->next;
     }
     temp->next=n;
}
void display(node* head){
      node* temp = head;
      while(temp!=NULL){
           cout<<temp->data<<"->";
           temp= temp->next;
      }
      cout<<"NULL\n";
}
bool search(node* head,int key){
     node*temp = head;
     while(temp!=NULL){
          if(temp->data==key){
               return true;
          }
          temp=temp->next;
     }
     return false;
}
int numberofitem(node* &head){
     node* temp=head;
     int count=0;
     while(temp!=NULL){
          temp=temp->next;
          count++;
     }
     return count;
}
void deletebyelements(node* &head,int val){
     node* temp=head;
     node* prev=NULL;
     while(temp!=NULL){
          if(temp->data==val){
              prev->next=temp->next;
              temp->next=NULL;
              delete temp;
              return;
          }
          prev=temp;
          temp=temp->next;
     }
}

int main(){

     node* head;
     head= NULL;
     insertAtTail(head,5);
     insertAtTail(head,9);
     insertAtTail(head,2);
     insertAtHead(head,4);
     display(head);
     cout << search(head, 1);
     insertAtPos(head,5,10);
     display(head);
     cout<<numberofitem(head);
     deletefromlist(head,2);
     deletebyelements(head,9);
     return 0;
}