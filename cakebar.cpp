#include<iostream>
using namespace std;
int main()
{
    int n,i,j,sum,m,d,c=0;
    cout<<"enter size"<<endl;
    cin>>n;
    cout<<"enetr date and month"<<endl;
    cin>>d>>m;
    int a[n];
    cout<<"enter elements"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-m;i++){
        sum=0;
        for(j=0;j<m+i;j++){
            sum=a[j]+a[j+1];
        }
        if(sum==d){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}