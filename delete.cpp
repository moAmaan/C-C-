#include<iostream>
using namespace std;
int main()
{
    int n,x,i;
    cout<<"enter size";
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"eneter element ";
    cin>>x;
    for(i=0;i<n;i++){
        if(a[i]==x){
          break;
        }
        else{
            continue;
        }
    }
for(int j=i;i<n;i++)
{
    a[i]=a[i+1];
}
n--;
for(i=0;i<n;i++){
    cout<<a[i];
}
return 0;
}
