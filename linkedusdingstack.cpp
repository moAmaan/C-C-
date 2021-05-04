#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
struct node* top=NULL;
void insert()
{
    struct node* temp;
    cout<<"Enter data to be inserted :";
    cin>>temp->data;
    temp->next=top;
    top=temp;
}
void pop()
{
    struct node*temp;
    if(top==NULL)
    {
        cout<<"Stack is empty!!:";
    }
    else{
        temp=top;
        cout<<"deleted element is:"<<temp->data;
        top=top->next;
        temp->next=NULL;
        free(temp);
    }
}
int main()
{
    
    insert();
    insert();
    insert();
    insert();
    insert();

    pop();
    return 0;
}