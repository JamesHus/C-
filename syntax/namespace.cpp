#include<iostream>
using namespace std;
// using namespace can avoid data with same name
// can define and declaraion in namespace
// and use using namespace ____  to access data in namespce
namespace A
{
    int m = 1;
    void display()
    {
        cout<<m<<" in namespace A "<<endl;
    }
}
namespace B
{
    int n = 2;
    // n in B B::n
    // nest l in C  use B::C::l to access l
    void display()
    {
            cout<<n<<" in namespace B "<<endl;
    }
    namespace C
    {
        int l = 3;
        void display()
        {
            cout<<l<<" in namespace C "<<endl;
        }
    }
}
int main()
{
    int m = 100,n = 200,l = 300;
    cout<<m<<" "<<n<<" "<<l<<endl;
    cout<<A::m<<" "<<B::n<<" "<<B::C::l<<endl;   
    using namespace A;
    display();
    B::display();
    //C::display(); error since C in namespace B
    B::C::display();
    cout<<m<<" "<<n<<" "<<l<<endl;   // even use using namespace A m still is which declared in main function not namespace A ,so  we need to notice the name of data(duplicate identifiers)
     cout<<A::m<<" "<<B::n<<" "<<B::C::l<<endl;   
    
    return 0;
}