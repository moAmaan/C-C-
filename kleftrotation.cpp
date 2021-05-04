#include<iostream>
using namespace std;
int main()
{
    int n,k,i;
     int temp;
    cout<<"enter size"<<endl;
    cin>>n;
    int a[n];
    int b[n];
    cout<<"enter k times rotation"<<endl;
    cin>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   for(int i=0;i<k;i++){
       b[i]=a[i];
   }
   for(int i=0;i<n-k;i++){
       a[i]=a[i+2];
   }
   for(int i=0;i<n;i++){
       a[n-k+i]=b[i];
   }
   for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
   }
}