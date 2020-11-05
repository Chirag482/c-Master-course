#include <iostream>
using namespace std;

int main()
{
    char arr[1000];
    cin.get(arr,1000,'$'); //cin.get function is used to enter the a sentence or a paragraph
    //1st parameter in the function i.e. is arr is the variable in which input value is stored
    //2nd parameter in the function i.e. 1000 is the maximum length of the inputing value
    //3rd value in the function i.e. '$' is the delimeter character which means when it is inputed the function will break and it has a deafult value i.e. a new line charater('\n')

    cout<<arr<<endl;
    return 0;
}
