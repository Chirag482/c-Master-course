#include<iostream>
#include<climits>       //it include some limits like min and max range of data types like int,float etc.
using namespace std;
int main()
{
    int N;
    cin>>N;
    int minimum = INT_MAX ;  //storing largest possible value of int data type to variable minimum
    int maximum = INT_MIN  ; //storing smallest possible value of int data type to variable maximum
    while(N>0)
    {
        int num;
        cin>>num;
        if(minimum>num)
        {
            minimum = num;
        }
        if(maximum<num)
            maximum = num;
        N--;
    }
    cout<<"Min "<<minimum<<endl<<"Max "<<maximum<<endl;
}
