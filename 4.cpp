#include<iostream>
#define max(a,b) ((a)>(b)?a:b);
using namespace std;
int main()
{
    char a='a';
    int b=2;
    double c=99;
    char *p1=&a;
    int *p2=&b;
    double *p3=&c;

cout<<"p1:"<<sizeof(p1)<<"\n"<<"p2:"<<sizeof(p2)<<"\n"<<"p3:"<<sizeof(p3);
}
