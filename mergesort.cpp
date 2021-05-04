#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid,int h){
    int n1=mid-l+1;
    int n2=h-mid;

    int a[n1],b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++){
        b[j]=arr[mid+j+1];
    }

    int c_i=0;
    int c_j=0;
    int k=l;

        while(c_i<n1&&c_j<<n2){
        if(a[c_i]<b[c_j]){
            arr[k]=a[c_i];
            c_i++;
            k++;
        }
        else{
            arr[k]=b[c_j];
            c_j++;
            k++;
        }
    }
    while(c_i<n1)
    {
        arr[k]=a[c_i];
            c_i++;
            k++; 
    }
    while(c_j<n2)
    {
          arr[k]=b[c_j];
            c_j++;
            k++;
    }


}


void mergesort(int arr[],int l,int h)
{
    if(l<h){
        int mid=l+h/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,h);

        merge(arr,l,mid,h);
    }
}
int main()
{
    int n;
    int begin;
    int end;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    begin=0;
    end=n-1;
    int A[n];
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    mergesort(A,begin,end);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}