#include<iostream>
using namespace std;
int main()
{
    int n,c;
    cout<<"enter size"<<endl;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=0;
    }
    for(int i=0;i<n;i++){
        if(b[i]==1){
            continue ;
        }
       c=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                c++;
                b[j]=1;
               
            }
        }
        cout<<"frequency of "<<a[i]<<" is "<<c<<endl;
    }
   
    return 0;
}