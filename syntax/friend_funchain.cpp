//  friend function isn't a function member in class
// but it can use class data 
// function chaining :  const  pass and return by reference
// return local variable in function  need  to add static nevertheless when funtion end the local will be undefined
// friend class e.g. friend A  in class B  means  A can access class B's object as data   
#include<iostream>
using namespace std;
class income;
class stock
{
    private:
        int piece;
        int value;
    public:
        stock(){piece = 0,value=0;};
        stock(int,int);
        void set(const int &,const int&);
        void display ()   const;
        friend income; 
};
class income
{
    private:
        int money;
    public:
        income(){money = 0;};
        income(int);
        income & add(const int &);
        income  add2(const int &);
        income &add3(const stock&);
        friend void  bonus(income &,const double &);
        void display();
};
income :: income(int m)
{
    money = m;
}
income & income :: add(const int &m)
{
    money+=m;
    return *this;
}
income  income :: add2(const int &m)
{
    money+=m;
    return *this;
}
income & test_sta()
{
    static income m(5000);  // without static  error !!!!
    return m;
}
void income :: display()
{
    cout<<"income = "<<money<<endl;
}
income & income :: add3(const stock& s)
{
    money += s.piece*s.value;
    cout<<"friend class"<<endl;
    return *this;
}
void bonus(income &m,const double &rate)
{
    cout<<" bonus "<<int(m.money * rate)<<endl;
}

void stock :: set(const int &p,const int&v)
{
    piece = p;
    value = v;
}
stock :: stock(int p,int v)
{
    piece = p;
    value = v;
}
void stock :: display() const
{
    cout<<piece<<"*"<<value<<"="<<piece*value<<endl;
}
using namespace std;
int main()
{
    income i1(500);
    i1.add(200).add(1000).display(); //1700
    i1.display(); //1700
    income i2(500);
    i2.add2(200).add2(1000).display(); //1700  since  james2.add2(200)   add2(1000) is  another new copy 
    i2.display(); //700 
    income i3 = test_sta();
    i3.display();
    bonus(i3,1.5);
    income i4(100);
    stock s1(500,500);
    i4.add3(s1);
    i4.display();
    return 0;
}