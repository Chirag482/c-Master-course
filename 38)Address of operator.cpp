#include <iostream>
using namespace std;
int main()
{
    // & is used to get the address of a variable in hexadecimal form but the address is stored in decimal form in the cpu

    int a=10;
    cout<<&a<<endl;

    //Not applicable on character array due to operator overloading
    char ch='A';
    cout<<&ch<<endl;

    //to get address of character array we have to typecast it

    //Explicit typecasting from char* to void*
    cout<<(void *) ch<<endl;
    return 0;
}
