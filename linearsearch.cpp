#include<iostream>
using namespace std;

int linearsearch(int a[],int n,int key){
    int start,end;
    start=0;
    end=n-1;
    while(start<end){
        if(a[start]==key){
            return start;
            break;
        }
        else if(a[end]==key){
            return end;
            break;
        }
        else
        {
            start++;
            end--;
        }        
    }
    return 0;
}

int main()
{
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    int a[n];
    int key;
    cout<<"enter key"<<endl;
    cin>>key;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   int x= linearsearch(a,n,key);
   cout<<"element :"<<a[x]<<"found at"<<x<<" index"<<endl;
}