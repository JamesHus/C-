#include<iostream>
#include<iomanip>
using namespace std;
template<class Tarr>
class Array
{
    private:
        Tarr *ptr;
        int n;
    public:
        Array(){n = 0;}
        Array(int);
        ~Array(){cout<<"des"<<endl;delete []ptr;}
        void getvalue();
        void display()
        {
            for(int i=0;i<n;i++)
            {
                cout<<ptr[i]<<" ";
            }
            cout<<endl;
        }
        
}; 
template<class Tarr>
Array<Tarr> :: Array(int num)   // define at outside need to add template<class Tarr> as header
{
    n = num;
    ptr = new Tarr[n];
    
};
template<class Tarr>   // define at outside need to add template<class Tarr> as header
void Array<Tarr> ::  getvalue()
{
    for(int i=0;i<n;i++)
    {
        cout<<"input value"<<setw(3)<<i<<" ";
        cin>>ptr[i];
    }
}
int main()
{
    Array<int> a1(5);  // Tarr datatype = int
    Array<char> a2(5);
    a1.getvalue();
    a1.display();
    a2.getvalue();
    a2.display();
    return 0;
}