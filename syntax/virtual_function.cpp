#include<iostream>
using namespace std;
class R
{
    protected:
        double r;
    public:
        R(){r = 0;}
        R(double re){r = re;};
        virtual void getvalue(){cout<<"Res"<<r<<endl;} // add virtual  so dynamic * Can points to getvalue() function in different class
};
class RC : public R
{
    protected:
        double c;
    public:
        RC(): R(){c = 0;}
        RC(double re,double ca): R(re) {c = ca;};
        void getvalue(){cout<<"Res"<<r<<"cap"<<c<<endl;}
};
class RLC : public RC
{
    private:
        double l;
    public:
        RLC(): RC(){l = 0;}
        RLC(double re,double ca,double lu): RC(re,ca) {l = lu;};
        void getvalue(){cout<<"Res"<<r<<"cap"<<c<<"ind"<<l<<endl;};
};
int main()
{
    R obr(100),*ptr;
    RC obrc(100,200),*ptr2;
    RLC obrlc(100,200,300);
    ptr = &obr;
    ptr->getvalue();
    ptr = &obrc;
    ptr->getvalue();
    ptr = &obrlc;
    ptr->getvalue();
    cout<<"ptr2 :"<<endl;
    ptr2 = &obrc;
    ptr2 -> getvalue();
    ptr2 = &obrlc;
    ptr2 -> getvalue();
    return 0;
}