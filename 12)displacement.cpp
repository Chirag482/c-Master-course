#include<iostream>
using namespace std;

int main()
{
    int x=0,y=0;
    char ch;
    do{
        ch = cin.get();
        if (ch=='N' or ch=='n'){
            y++;
        }
        else if (ch=='E' or ch == 'e'){
            x++;
        }
        else if(ch == 'W' or ch == 'w'){
            x--;
        }
        else if(ch == 'S' or ch =='s'){
            y--;
        }
    }while(ch != '\n');
    cout<<x<<y<<endl;

    if(y>0){
        while(y>0){
            cout<<'N';
            y--;
        }
    }
    else{
        while(y<0){
            cout<<'S';
            y++;
        }
    }

    if(x>0){
        while(x>0){
            cout<<'E';
            x--;
        }
    }
    else{
        while(x<0){
            cout<<'W';
            x++;
        }
    }
}
