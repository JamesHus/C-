// vector<int> vec for_each(vec.begin(),vec.end(),____)  ____ ->  1. lambdas expression  2. functor ... for_each in <algorithm>
// functor  means objects  can be used like function  e.g.  with void operator()(int x){sum+=x;}  in Sum class    
// Sum()  can  represents  as objectname.operator()(int)
// class does't have +  -  +=  ....
// so we use operation overloading to make calculationc   ->  operator+=  operator+ ... 
// notice the return type is class or void 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{

    return 0;
}