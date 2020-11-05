#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[] = {1,45,68,45,78};
    int n = sizeof(a)/sizeof(int);
    int key;
    cin>>key;

    //find function will find the provided key in the array
    int * it = find(a,a+n,key);
    //find function will return the address of the index of the index of array where the key is found
    cout<<it<<endl;
    // to measure the index we can subtract the base address of array from resultant address
    cout<<(it-a)<<endl;

    return 0;

    //NOTE => 1) if an array contains elements more than one than the key found at min index will be printed
    //          2) if the key given is not present in the given array than the index will be printed n which is the size of the array.
}
