#include <iostream>
#include <cstring>
using namespace std;

bool palindrome(char a[])
{
    int i=0;
    int j = strlen(a) - 1;
    while(i<j){
        if(a[i] == a[j]){
            j--;
            i++;
        }
        else{
            return false;
        }
    }
    return true;
}

int main()
{
    char str[1000];
    cin.getline(str,1000);
    if(palindrome(str)){
        cout<<"palindromic String"<<endl;
    }
    else{
        cout<<"Not a Palindromic String"<<endl;
    }
    return 0;
}
