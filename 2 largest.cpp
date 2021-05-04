#include<iostream>
using namespace std;
int main()
{
int n,i,j;
 int temp;
cout<<"enter size:"<<endl;
cin>>n;
int a[10];
for (int i=0;i<n;i++)
{
    cin>>a[i];
}
for( i=0;i<n;i++)
{
    for (j=i+1;j<n;j++)
    if(a[i]>a[j])
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
cout<<"second larest elemnt is:"<<a[n-2];
return 0;
}
