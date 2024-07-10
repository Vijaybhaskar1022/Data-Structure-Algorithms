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

   void Level_order_of_tree(Node *root)
   {
        int temp;
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
                cout<<temp->data<<" ";
                
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                
                q.pop();
            } 
            cout<<endl;
        }
        
    }
    void level(){
        Level_order_of_tree(root);
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
        tr.level();
    cout<<endl;
    }
    return 0;
}
