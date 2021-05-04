#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *lchild,*rchild;
};

struct node* newnode(){
    struct node* temp;
    temp=(node*)malloc(sizeof(node));
    temp->lchild=NULL;
    temp->rchild-NULL;

    return temp;
}



void createbinary(struct node* root,int A[],int n){
    root->data=A[0];
  struct node* temp;
    temp=root;
    while(temp!=NULL){
        for(int i=0;i<n;i++)
        {
            
            if(temp->data>A[i]){
            temp=temp->lchild;
            }
            else if(temp->data<A[i]){
            temp-temp->rchild;
            }
            else
            {
                if(temp->lchild==NULL){
                    temp->lchild=newnode();
                }
                else if(temp->rchild==NULL)
                {
                   temp->rchild=newnode();
                }
                else 
                temp->data=A[i];
                
            }
            
        }
    }
}

struct node* inorder(struct node* p)
{
    return(p->lchild);
cout<<p->data;
    return(p->rchild);
}
int main()
{
    struct node* root=NULL;
    if(root==NULL){
        root=newnode();
    }
    int n;
    cout<<"size"<<endl;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    createbinary(root,A,n);
    inorder(root);
    return 0;
}