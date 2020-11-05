#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int maxl = 0;
    char largest[1000];
    cin.get();
    while(N>0)
    {
        char a[1000];
        cin.getline(a,1000);
        int l = strlen(a);
        if(maxl<l){
            maxl = l;
            strcpy(largest,a);   // copies the a string to kargest string
        }
        N--;
    }
    cout<<maxl<<" "<<largest<<endl;
    return 0;
}
