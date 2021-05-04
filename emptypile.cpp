#include<iostream>
using namespace std;
int binarysearch(int A[],int n,int h,int time){
    int mid,low,high;
    low=1;
    high=n-1;
    if(low<high){
        mid=(low+(high-low))/2;
        for(int i=0;i<n;i++){
            time=(time+A[i])/mid;
        }
        if(time<h){
            high=mid-1;
        }
        else if(time>h){
            low=mid+1;
        }
        else if(time==h)
       { return mid;
       }
       else 
       {
           return -1;
       }
    }
    return mid;
}
int main()
{
    int n,time=0,h;
    cout<<"size of array"<<endl;
    cin>>n;
    cout<<"enter elements "<<endl;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"enter at most time "<<endl;
    cin>>h;
    int x=binarysearch(A,n,h,time);
    cout<<"minimum no. of coins "<<x<<endl;
    return 0;

}