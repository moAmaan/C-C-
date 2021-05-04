#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    struct node* lchild;
    int data;
    struct node* rchild;
}node;
void insert(node* rt,int k)
{
    node* t=rt;
    node* r=NULL,*p;
    if(t==NULL){
        node* p=(node*)malloc(sizeof(node));
        p->data=k;
        p->lchild=p->rchild=NULL;
        t=p;
        return;
    }
    while(t!=NULL)
    {
        r=t;
       
      if(k<t->data)
        {
            t=t->lchild;
        }
        else if(k>t->data)
        {
            t=t->rchild;
        }
        else
        {
            return;
        }
        
    }
    p=(node*)malloc(sizeof(node));
    p->data=k;
    p->lchild=p->rchild=0;
    if(k>r->data)
    {
        r->rchild=p;
    }
    else if(k<r->data)
    {
        r->lchild=p;
    }
    else 
    return;

}
node* inorder(node* p)
{
    return(p->lchild);
    printf("%d ",p->data);
    return(p->rchild);
}
int main()
{
    node* root=NULL;
    insert(root,10);
    insert(root,5);
    insert(root,20);
    insert(root,8);
    insert(root,30);

    inorder(root);
    printf("\n");
    return 0;
}