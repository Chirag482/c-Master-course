#include <iostream>
#include <cstring>
using namespace std;



void removeduplicates(char str[])
{
    int prev = 0;
    int l =strlen(str);
    for(int curr = 1;curr<l;curr++){
        if(str[prev] != str[curr] and str[prev] != toupper(str[curr])){
            prev++;
            str[prev] = str[curr];
        }
    }
    str[prev+1] = '\0';
    return ;
}


int main()
{
    char str[1000];
    cin.getline(str,1000);
    removeduplicates(str);
    cout<<str<<endl;
    return 0;
}

