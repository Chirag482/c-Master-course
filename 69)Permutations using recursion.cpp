#include <iostream>
using namespace std;
void generate(char inp[],int i){
    //base case
    if(inp[i]=='\0'){
        cout<<inp<<" ";
        return;
    }
    //recursive case
    for(int j=i;inp[j]!='\0';j++){
        swap(inp[i],inp[j]);
        generate(inp,i+1);
        swap(inp[i],inp[j]);//backtracking
    }
    return;
}
int main() {
    char inp[10];
    cin>>inp;
    generate(inp,0);
    return 0;
}
