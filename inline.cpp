#include <iostream>
using namespace std;
inline int zoroo(int height,int age)
{
    int s=height-age;
    return s;
}
int main()
{
    int age,height;
    cout<< "nas:";
    cin>>age;
    cout<< "ondor:";
    cin>>height;
        cout<<zoroo(height,age);
}
