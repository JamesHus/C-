#include<iostream>
#include<time.h>
using namespace std;
// inline function same as function add inline in front of function itself save time but large
// function overload   return type isn't a signatue of function 
// sginature  name  parameters' datatpye  parameters' orders   
inline void in_dis(int a){cout<<"inline function "<<a<<endl;}
int * sort(int *);
double * sort(double *);
void dis(int *);
void dis(double *);
int main()
{
    srand(time(NULL));
    int *arr_int;
    arr_int  = new int[10];
    for(int i=0;i<10;i++)
        arr_int[i] = rand()%10;
    
    in_dis(arr_int[0]);
    
    double *arr_double;
    arr_double  = new double[10];
    for(int i=0;i<10;i++)
        arr_double[i] = double(rand()%10)/ 10;
    arr_int = sort(arr_int);
    arr_double = sort(arr_double);
    dis(arr_int);
    dis(arr_double);
    return 0;
}
int * sort(int *a)
{
    int temp;
    for(int i=0;i<9;i++)
        for(int j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    return a;
}
double * sort(double *a)
{
    double temp;
    for(int i=0;i<9;i++)
        for(int j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    return a;
}
void dis(int *a)
{
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void dis(double *a)
{
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
