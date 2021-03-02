// A pointer to a constant  const int *p p = &a
// A reference to a const  const int &rx = x  
// A const pointer  always points to same address
#include<iostream>
using namespace std;
int main()
{
    int a = 15,b = 30;
    const int *ptoct = &a;  // 指向一個"常數"-> 可以改指向,但指向的常數不能改
    cout<<"address of a "<<&a<<" address of  *ptoct "<<ptoct<<" value a "<<a<<endl;
    ptoct = &b;
    cout<<"address of b "<<&b<<" address of  *ptoct "<<ptoct<<" value ptoct "<<*ptoct<<endl;
    const int &retoct = a;  // read-only alias a可以改  但refercen不能改
    cout<<"referce "<<retoct<<endl;
    a = 35;
    cout<<"referce "<<retoct<<endl;
    //retoct = 15; error
    int * const ctpoint = &a;  // 永遠指向a 不能改指向b
    //ctpoint = &b;  error
    return 0;
}
