#include<iostream>
// use functional<> template to hold the lambda
#include<functional>
using namespace std;
int main()
{
    // lambda :　define a function with no name 
    // also can pass an operatrion as an arguement to a function ,and another function ect,..
    // bacis syntax [](parameters) mutable->Returntype{Body};   
    // Rutable->Returntype can ignore sys with detect 
    
    // e.g. 1 lambda expression
    /*
    cout<<[](int x,int y){return x<y;}(5,10)<<endl;  // add(5,10) behind the lambda 
    function<void()> HW = [](){cout<<"Hello world!";};   // or use auto  to reprents function<void()>
    auto HW2 = [](){cout<<"Hello world!";};
    HW();
    HW2();
    */
    
    //e.g. 2 [] captue list
    // [=] capture by value  [&] by reference [this] by this pointer
    // lambda constant  with  mutable non-constant  can't change value in []
    // m1,m2,m3  [=,m3] [&,m3] all the parameter without m3 is captured by value same as by reference
    /*
    int m1 = 100,m2 = 200;
    [=]()mutable{
        m1 = 200;        // without mutable will be error ,but  m1 m2  still not be changed at outside
        m2 = 300;
        cout<<m1<<" "<<m2<<endl;}();
    cout<<m1<<" "<<m2<<endl; 
    [&](){
        m1 = 200;        // [&] by reference will m1 m2 will change outside
        m2 = 300;
        cout<<m1<<" "<<m2<<endl;}();
    cout<<m1<<" "<<m2<<endl; 
    */
   
    return 0;
}