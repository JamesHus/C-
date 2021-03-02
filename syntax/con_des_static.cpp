// constructor   class  provides default constructor  automatically
// exceptions two conditions   1. default constructor in private  or 2. programmer has set other constructor with data type
// use const Class_name & (reference)  to save memory allocation 
// and use ~classname()  ->  destructor  to  free the memory allocation when the object is  crushed


// static data  is  as like as global  data   is  dependent of object  and be initiated before object be declared  ??   something wrong  check!
// and static function can access static data  can be called  by 1. Class_name :: function name  2.  object.function  ??
// can't get data by value but can get by pointer and reference ??


#include<iostream>
using namespace std;
class name
{
    private:
        string first,last;
    public:
        name(){cout<<" default constructor "<<endl;};
        name(const string &,const string &);
        name(const string &);
        void set(const string & f,const string & l);
        void display();
        ~name(){cout<<" destructor"<<endl;};
};
name :: name(const string & f,const string & l)
{
    first = f;
    last = l; 
}
name :: name(const string &l)
{
    last = l; 
}
void name :: set(const string & f,const string & l)
{
    first = f;
    last = l;
}
void name :: display()
{
    cout<<"name :"<<first<<" "<<last<<endl;
}
/*
// static test
class A
{
    int m;
    double n;
    static int x;
    static int y;
};
class B
{
    int m;
    double n,l;
    static int y;
};
*/
int main()
{
    //cout<<sizeof(int)<<" A "<<sizeof(A)<<" B "<<sizeof(B)<<endl;
    name A[5];  // automaticalily create  default constructor
    name J("Hsu","James");
    J.display();
    A[0].set("Hsu","John");
    A[0].display();
    return 0;
}
