#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout<<"enter size :\n";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<<"enter elements:";
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
     for (int i=0;i<n;i++)
    {
        cout<<v.at(i)<<" " ;
        
    }
    cout<<"first elements is:"<<v.front();
    cout<<"last element is:"<<v.back();
    return 0;

}