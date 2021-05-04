#include<iostream>
using namespace std;
template<typename Y>
class base
{
    public:
    Y x;
    base(Y a){
        x=a;
        cout<<"captured value is:"<<x<<endl;
    }

};
int main()
{
    base <float>ob(4.6f);
    return 0;
}
