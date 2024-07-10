#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
    }
};
class Tree{
    public:
    int c=0;
    Node *root=nullptr;
    Node *createnode_and_insert(Node *root,int val)
    {
        if(root==nullptr)
        return new Node(val);
        else if(val<root->data)
        root->left=createnode_and_insert(root->left,val);
        else if(val>root->data)
        root->right=createnode_and_insert(root->right,val);
        return root;
    }
    void insert(int val)
    {
        root=createnode_and_insert(root,val);
        
    }
    int height(Node *root)
    {
        int lh,rh;
        if(root==nullptr)
        return -1;
        
        else{
        lh=height(root->left);
        rh=height(root->right);}
        int h=max(lh,rh);
        h++;
        return h;
    }
    void h(){
        
        cout<<height(root)<<endl;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Tree bst;
        while(n--)
        {
            int val;
            cin>>val;
            bst.insert(val);
        }
        bst.h();
       
    }
}
