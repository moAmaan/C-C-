#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
struct node* root=NULL;
void insert()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    cout<<"Enter data to be inserted in node:";
    cin>>temp->data;
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        temp->next=root;
        root=temp;
    }
    
}
void print()
{
    struct node *temp;
    temp=root;
    if(temp==NULL)
    {
        cout<<"link is empty!!";
    }
    else
    {
        while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    }
}
void remove(){
    struct node*temp,*p,*q;
     int loc,i=0;
     cout<<"enter location :";
     cin>>loc;
    if(root==NULL){
        cout<<"Link is empty!!";
    }
    else if(loc==1){
        temp=root;
        root=temp->next;
        temp->next=NULL;
        free(temp);
    }
    else if(loc>1){
        while(i<loc-1){
            p=p->next;
            i++;
        }
        q=p->next;
        p->next=q->next;
        q->next=NULL;
        free(q);
    }
    p=root;
  
    cout<<"Enter location of node to be deleted :";
    cin>>loc;
    while(i<loc-1)
    {
        p=p->next;
        i++;
    }



}

int main()
{
    
    insert();
    insert();
     insert();
    insert();
     insert();
   

    print();
    return 0;
}