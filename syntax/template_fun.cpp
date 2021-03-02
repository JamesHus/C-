#include<iostream>
#include<iomanip>
#include<functional>
#include<vector>
using namespace std;
template<class type,class type2>
auto max(type x,type2 y)
{
    return (x>y)? x:y;
}
int main()
{
    cout<<max(1.5,100)<<endl;
    cout<<max(200,100)<<endl;
    cout<<max(15.5,1.5)<<endl;
    cout<<max("abcd","ABC")<<endl;  // ????
    return 0;
}