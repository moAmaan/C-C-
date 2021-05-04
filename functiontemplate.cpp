#include<iostream>
using namespace std;
template<typename T>
void swap(T *a,T *b)
{
    T *tem;
    *tem=*a;
    *a=*b;
    *b=*tem;
}
int main()
{
    int n,m;
    cout<<"enter two values to be swaped"<<endl;
    cin>>n>>m;
    cout<<"before swapping values are:"<<n<<m<<endl;
    swap<int>(&n,&m);
    cout<<"after swapping values are:"<<n<<" "<<m;
return 0;

}