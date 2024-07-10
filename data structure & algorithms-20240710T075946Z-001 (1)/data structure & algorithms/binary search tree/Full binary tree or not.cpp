#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
       int data;
       Node* left;
       Node* right;
       Node(int data){
           this->data=data;
           this->left=NULL;
           this->right=NULL;
       }
};

class Tree{
    public:
       Node* root=NULL;
       
       Node* insert_node_at_bst(Node* root,int data){
           if(root == NULL){
               Node* newNode = new Node(data);
               return newNode;
           }
           else if(data < root->data){
                root->left=insert_node_at_bst(root->left,data);
           }
           else
                root->right=insert_node_at_bst(root->right,data);
            return root;
       }
       
      void insertNode(int data){
           root = insert_node_at_bst(root,data);
       }

   void full_binary_tree(Node *root)
   {
        int temp;
        string str="True";
        queue<Node*>q;
        if(root==NULL)
        {
         return;
        }
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            for(int i=1;i<=size;i++)
            {
                Node* temp = q.front();
                
                if(temp->left==NULL&&temp->right==NULL)
                {   
                    q.pop();
                    continue;
                }
                
                if(temp->left!=NULL&&temp->right!=NULL)
                {
                    q.push(temp->left);
                    q.push(temp->right);
                
                q.pop();
                }
                else
                {
                  str="False";
                  goto l1;
                }
            } 
        }
        l1:
        cout<<str;
    }
    void full(){
       full_binary_tree(root);
    }
       
};

int main()
{
    int t,n,a;
    cin>>t;
    while(t--){
        Tree tr;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            tr.insertNode(a);
        }
        tr.full();
    cout<<endl;
    }
    return 0;
}
