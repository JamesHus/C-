#include<iostream>
using namespace std;
class R
{
    private:
        double r;
    public:
        R(double res){r= res;};
        virtual void I()=0;
        double getr(){return r;}
        virtual ~R(){cout<<"R des"<<endl;}
};
class VI : public R
{
    private:
        double v,i;
    public:
        VI(double,double);
        ~VI(){cout<<"VI des"<<endl;};
        void I();
};
VI :: VI(double V,double res): R(res)
{
    v = V;
}
void VI :: I()
{
    i = v / getr();
    cout<<"i = "<<i<<endl;
}
int main()
{
    R *res;
    VI vi(10,5);
    res = &vi;
    res->I();
    return 0;
}