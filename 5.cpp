#include<iostream>
#define max(a,b) ((a)>(b)?a:b);
using namespace std;
int main()
{
    int a=125;

    int *p = &a;

    cout<<"p="<<p<<"\n";

    cout<<"*p="<<*p<<"\n";

    p++;

    cout<<"p++: p="<<p<<"\n";

    cout<<"p++: p="<<*p<<"\n";
}
