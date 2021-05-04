#include<iostream>
#include<map>
#include<utility>
using namespace std;
int main()
{
    map<int,int> m={{1,2},{2,5},{3,6},{4,10}};
    map<string,int> m1;
    m1["a"]=11;
    m1["b"]=12;
    m1["c"]=13;
    m1.insert(pair<string,int>("d",14));
    for (int i=0;i<m.max_size();i++)
    {
        cout<<m.at(i);
    }
    return 0;

}