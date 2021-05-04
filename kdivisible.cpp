#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
   while(t){
       int n,k;
       cin>>n>>k;
     
       int sum=0;
       int a[n];
       
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
     
       for(int i=0;i<n;i++){
           sum+=a[i];
       }
       if(sum%k==0)
       {
           for(int i=0;i<n;i++){
               if(*max_element(a,a+n)==a[i]&&a[i]<=k){
                   cout<<a[i];
               }
               else 
               {
                   continue ;
               }
           }
       }
       t--;
   }
   return 0;
}