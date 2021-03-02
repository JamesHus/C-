// string s   s.length() 
// getline(stirng &s1,string &s2)  s1 from input file to s2(store in s2)
// c++ stirng   +  +=  are available  
// substr(start(index),length)  string want = s.substr(index,len)
// s.find(s2,index(from))  s2 is a substring in s  if not found returns string::npos(-1)
// s.rfind  backtrack same as find()
// find_first_of(s2)  find_first_not_of(s2)
// s.erase(index,len)
// s.replace(index,len,s2)
// s.insert(index,s2)
// s.swap(s2)
// 比大小的觀念  從個別的第一個以此類推比下去  一有結果就停 e.g.  aaac > aaabxcccc  since in [3] c>b
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string s1("James"),s2("Hsu"),s3 = "James Hsu",s4 = " is handsome ";
    string s5;
    // 1 length
    for(int i=0;i<s1.length();i++)
        cout<<s1[i];
    cout<<endl;
    getline(cin,s5);  // cin 遇到空白停止  getline 可以一整行 包括空白
    cout<<s5<<endl;
    string s6 = s1 +" "+ s2;
    (s6==s3)? cout<<"same"<<endl  :  cout<<"different";
    int index = s3.find(s1);
    cout<<s1<<" s1 in s3 "<<s3<<" at "<<index<<endl;
    s4.replace(s4.find("handsome"),s4.find_last_not_of("handsome")-s4.find("handsome")+1,"smart");
    cout<<s4<<endl;
    s4.insert(s4.find_last_not_of("smart")," handsome and ");
    cout<<s4<<endl;
    string s7 = s4.substr(4,4);
    cout<<s7<<endl;
    cout<<s4.rfind("handsome")-s4.find("handsome")<<endl;
    return 0;
}