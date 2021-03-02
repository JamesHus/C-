// since there is only one function member in a class
// but probably has many objects
// by using this pointer  can  let function member notice which object invokes the function
// and operator()= is the same

// copy constructor
// 1. assignment when object is " declared "  e.g.  cl_A ob_a = b;
// 2. object pass by value  and 3. return by value   in these 3 situations  ob_a will points to same memory location as b
// doesn't have it's own "alloction" and one of them  be crushed the other will be crushed ,too   there is a problem
// so  we need to redefine  copy constructor by ourselves and allocate the "new" memory location to them
#include<iostream>
using namespace std;
class name
{
    private:
        int length;
        int *array;
    public:
        name();
        name(int);
        name(const name &);     
        const int & operator[](int);  
        name & operator=(const name&);
        ~name();
        void dis();
};
name :: name()
{
    cout<<"dafault con"<<endl;
}
name :: name(int len)
{
    cout<<"regular con"<<endl;
    length = len;
    array = new int[len];
    for(int i=0;i<len;i++)
        array[i] = rand()%10;
}
const int & name ::operator[](int index)
{
    return this->array[index];
}
name :: name(const name &ob)
{
    cout<<"copy con "<<endl;
    length = ob.length;
    array = new int[length];
    for(int i=0;i<length;i++)
        array[i] = ob.array[i];
    for(int i=0;i<length;i++)
        cout<<array[i]<<" ";
    cout<<endl;
}
name & name :: operator=(const name & ob)
{
    length = ob.length;
    cout<<"assignment operation "<<length<<endl;
    for(int i=0;i<length;i++)
        array[i] = ob.array[i]; 
    for(int i=0;i<length;i++)
        cout<<array[i]<<" ";
    cout<<endl;
    return *this;
}
name ::  ~name()
{
    cout<<" destructor "<<endl;
    delete []array;
}
void name :: dis()
{
    cout<<"len"<<length<<endl;
    for(int i=0;i<length;i++)
        cout<<array[i]<<" ";
    cout<<endl;
}
int main()
{
    name a1,a2;
    name a3(10);
    a3.dis();
    name a4 = a3;
    //a2 = a3;   since a2 is default has no momery allocation 
    //a2.dis();  wrong  run time error
    a4.dis();   
    return 0;
}