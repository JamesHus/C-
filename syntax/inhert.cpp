// base  derived class   : public base_class_name
// constructor  from base to derive  but destructor  from dericed to base
// derived can access base's public and protected data
// if derived class has same function member's name as base derived will name hiding
// need dericved.base::function name
// inhert constructor need to use header initialization  when there are const or other object
#include<iostream>
#include<vector>
using namespace std;
class school
{
    private: 
        string name;
    public:
        school(const string &);
        void display();
        ~school(){cout<<"base des"<<endl;};
};
class student: public school
{
    private:
        string name;
        vector<int> grade;
        double gpa; 
    public:
        student(const string &,const string &);
        void input(const vector<int> &);
        void display() const;
        ~student(){cout<<"der des"<<endl;};
};
school :: school(const string &m)
{
    name = m;
    cout<<"base con"<<endl;
}

void school :: display()
{
    cout<<"NYCU"<<endl;
}
student :: student(const string &m,const string &n): school(m)
{
    name = n;
}
void student :: input(const vector<int> &gra)
{
    for(int i=0;i<gra.size();i++)
        grade.push_back(gra[i]);
    int sum = 0;
    for(int i=0;i<grade.size();i++)
        sum+=grade[i];
    double avg = double(sum/=grade.size());
    if(avg>90)
        gpa = 4;
    else if(avg>80)
        gpa = 3;
    else if(avg>70)
        gpa = 2;
    else if(avg>60)
        gpa = 1;
    else
        gpa = 0;
}
void student ::  display() const 
{
    for(int i=0;i<grade.size();i++)
        cout<<grade[i]<<" ";
    cout<<"gpa"<<gpa<<endl;
}
int main()
{
    student I("NCYU","James");
    vector<int> g = {75,76,80,81,72};
    I.input(g);
    I.display();          // derived class overide base if same name display()
    I.school::display();
    return 0;
}  