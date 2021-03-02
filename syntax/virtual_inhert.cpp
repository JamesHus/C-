// since c is derived from B1 and B2 
// but both B1 B2 are derived from A , C will derived from A twice 
// there is a problem
#include<iostream>
#include<vector>
using namespace std;
class A
{

};
class B1: virtual public A
{

};
class B2: virtual public A
{

};
class C: public B1,public B2
{

};
int main()
{
    
    return 0;
}