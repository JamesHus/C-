#ifndef A_H
#define HEADER_H   // ifndef define endif
#include<iostream>
using namespace std;
class A
{
    private:
        string firstname;
        string lastname;
    public:
        A();
        A(string,string);
        void show();
    
};
A :: A()
{

}
A :: A(string fir,string last) 
{
    firstname = fir;
    lastname = last;
    cout<<firstname<<lastname<<endl;
}
void A::show()
{
    cout<<firstname<<lastname<<endl;
}
int add(int m,int n)
{
    return m+n;
}
#endif
