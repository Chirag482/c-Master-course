#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)       //loop for rows
    {
        //Printing spaces
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        //printing ascending values
        int num = i;
        for(int j=1;j<=i;j++,num++)
        {
            cout<<num;
        }
        //Printing descending values
        num-=2;
        for(int j=1;j<i;j++,num--){
            cout<<num;
        }
        //printing end spaces
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        //adding a new line character
        cout<<endl;
    }
}
