#include<iostream>
using namespace std;
void sort(int arr[],int l,int h)
{
    for(int i=0;i<h;i++){
        for(int j=i+1;j<h;j++){
            if(arr[i]>arr[j]){
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int binarysearch(int arr[],int l,int h,int key)
{
    if(l<h){
    
        int mid=l+h/2;
        if(key==arr[mid]){
            return mid;
        }
        else if(key<arr[mid]){
        binarysearch(arr,l,mid,key);
        }
        else{
            binarysearch(arr,mid+1,h,key);
        }
    }
    return -1;
}
int main()
{
    int A[10],n,x;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    cout<<"Enter elements of array:"<<endl;
    int begin=0;
    int end=n-1;
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int getkey;
    cout<<"Enter value to be searched:"<<endl;
    cin>>getkey;
    
    sort(A,begin,end);
    x=binarysearch(A,begin,end,getkey);
    cout<<"your element:"<<A[x]<<"is at index"<<x;
    return 0;
    
}
