#include<iostream>
using namespace std;
void generate_subsequence(char input[],char output[],int i,int j)
{
    if(input[i]=='\0'){
        output[j]='\0';
        cout<<output<<" ";
        return;
    }
    output[j] = input[i];
    //include the current char
    generate_subsequence(input,output,i+1,j+1);
    generate_subsequence(input,output,i+1,j);

}
int main()
{
    char input[] = "abc";
    char output[100];

    generate_subsequence(input,output,0,0);
    return 0;
}
