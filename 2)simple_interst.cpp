#include <iostream>
using namespace std;
int main()
{
    int p,r,t;
    float si;

    cin>>p>>r>>t;      //for inputing through user

    si = p*r*t / 100.0;
    /* Implicit Typecasting
    1) integer / integer will give integer value.
    2) integer / float will give float value.
    3) float / integer will give float value. */
    cout<<si<<endl;

    return 0;
}
