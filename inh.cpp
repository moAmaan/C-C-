#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"hello base"<<endl;
    }
   void display()
    {
        cout<<"this is base class "<<endl;
    }
};
class child : public base
{
    public:
    child()
    {
        cout<<"hello child"<<endl;
    }
    void display()
    {
        cout<<"this is derived class "<<endl;
    }
};
int main()
{
    child c;
    child *t;
    t=&c;
    c.display();
    base b;
    base *x;
    x=&c;
    b.display();
    x->display();
   
    return 0;
}
