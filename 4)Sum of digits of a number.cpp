#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int num = N;
    int sum =0 ;
    while (N>0)
    {
        int lastdigit = N%10;
        sum += lastdigit;
        N /= 10;
    }
    cout<<"Sum of Digits of "<<num<<" is "<<sum<<endl;
}
