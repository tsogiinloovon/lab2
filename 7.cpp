#include<iostream>
#define max(a,b) ((a)>(b)?a:b);
using namespace std;
void change(int *a,int *b);
int main()
{
    int a,b;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    change(&a,&b);
}
void change(int *a,int *b)
{
    int s;
    s=*a;
    *a=*b;
    *b=s;
    cout<<"a="<<*a<<endl<<"b="<<*b;
}
