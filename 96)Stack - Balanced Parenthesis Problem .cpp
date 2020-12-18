#include<iostream>
#include<stack>
using namespace std;

bool isValidExp(char *str){
    stack<char> s;

    for(int i=0;str[i]!='\0';i++){
        char ch = str[i];

        if(ch =='('){
            s.push(ch);
        }
        else if(ch==')'){
            if(s.empty() or s.top()!='('){
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}

int main(){
    char s[100] = "((a+b)+(c-d+f))";

    if(isValidExp(s)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"NO";
    }
    return 0;
}
