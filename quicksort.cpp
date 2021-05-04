#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int r){
    int i=l-1;
    int pivot=a[r];
    for(int j=l;j<r;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
    
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}

void quicksort(int a[], int l, int r){
    if(l<r){
        int pi=partition(a,l,r);
        quicksort(a,l,pi-1);
        quicksort(a,pi+1,r);
    }
}

int main()
{
    int n,l,r,i;
    cout<<"enter size"<<endl;
    cin>>n;
    int a[n];
    l=0;
    r=n-1;
    cout<<"enter elements"<<endl;
    for( i=0;i<n;i++){
        cin>>a[i];
    }
    quicksort(a,l,r);
    for( i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
return 0;
}