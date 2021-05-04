#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int n,s,i,key,j;
    cout<<"enter size of array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elements"<<endl;
    for( i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter key"<<endl;
    cin>>key;
    sort(a,a+n);
    s=sqrt(n);
    for(i=0;i<n;i+=s){
        if(a[i]==key){
            return i;
        }
        else if(a[i]<key){
            continue;
        }
        else
        {
            int m=i-s;
            for( j=m;j<i;j++){
                if(a[j]==key){
                    return j;
                }
            }
            return -1;
        }
        
    }
    cout<<"element :"<<a[j]<<"is at index"<<j <<endl;
return 0;
}