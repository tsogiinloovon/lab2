#include<iostream>
#define max(a,b) ((a)>(b)?a:b);
using namespace std;
int main()
{
    int numbers[5];//husnegt zarlaj 5 element tei
    int *p;//haygiin huwisagch zarlah
    p = numbers;//husnegtiin hamgiin ehnii elementiin haygiig p ogch bn
    *p = 10;//putgand n 10 ogch bn
    p++;
    *p = 20;// daraagiin hayg deer n 20 ogch bn
    p = &numbers[2];//2 dugaartai elementiin haygiig p ogch bn
    *p = 30;//utgand n 30
    p = numbers + 3;//hamgiin ehnii elementin haygiig 3 nemegduuled p ogch bn
    *p = 40;// tehain hayg deer 40 ogch bn
    p = numbers;//hamgiin ehnii elementiin haygiig p ogch bn
    *(p+4) = 50;//p haygiig 4 nemegduuled utgand n 50 ogch bn
    for (int n=0; n<5; n++)//0->5 hurtelh elemintiin utgiig hewlej bn
        cout << numbers[n] << ", ";
}
