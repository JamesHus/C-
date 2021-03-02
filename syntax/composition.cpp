// composition  has-a relationship 
// 
#include<iostream>
#include<math.h>
using namespace std;
class point
{
    private: 
        double x,y;
    public:
        point(){x=0;y=0;};
        point(double m,double n){x = m;n = x;};
        double getx(){return x;}
        double gety(){return y;}
        void set(const double &,const double &);
};
void point :: set(const double &m,const double &n)
{
    x = m,y = n;
}
class line
{
    private:
        double len;
        point P1,P2;
    public:
        line() :P1(),P2() {len = 0;}
        double length();
};
double line :: length()
{
    P1.set(0,0);
    P2.set(3,4);
    return double(pow(pow(double(P1.getx() - P2.getx()),2) + pow(double(P1.gety() - P2.gety()),2),0.5));
}
int main()
{
    line l;
    cout<<"len"<<l.length()<<endl;
    return 0;
}