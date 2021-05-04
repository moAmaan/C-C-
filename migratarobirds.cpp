#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        b[i]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                b[a[i]]++;
            }
        }
    }
    int min=b[0];
    for(int i=0;i<n;i++){
        if(min>b[i]){
            min=b[i];
        }
        
       

    }
    cout<<min;
    return 0;
}