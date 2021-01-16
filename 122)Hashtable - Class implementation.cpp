#include<iostream>
#include<cstring>
using namespace std;

template<typename T>
class Node{
public:
    string key;
    T value;
    Node<T>*next;

    Node(string key,T val){
        this->key = key;
        value = val;
        next = NULL;
    }
    ~Node(){
        if(next!=NULL){
            delete next;
        }
    }
};

template<typename T>
class Hashtable{
    Node<T>** table; //pointer to an array of pointers
    int current_size;
    int table_size;

    int hashfunction(string key){
        int idx = 0;
        int p =1;
        for(int i=0;i<key.length();i++){
            idx = idx + (key[i]*p)%table_size;
            idx = idx%table_size;
            p = (p*27)%table_size;
        }
        return idx;
    }
    void rehash(){
        Node<T>** oldtable = table;
        int oldtablesize = table_size;
        table_size = 2*table_size;
        table = new Node<T>*[table_size];

        for(int i=0;i<table_size;i++){
            table[i] = NULL;
        }
        current_size = 0;

        //shift the elements from old table to new table
        for(int i=0;i<oldtablesize;i++){
            Node<T>*temp = oldtable[i];
            while(temp!=NULL){
                insert(temp->key,temp->value);
                temp = temp->next;
            }
            if(oldtable[i]!=NULL){
                delete oldtable[i];
            }
        }
        delete [] oldtable;
    }
public:
    Hashtable(int ts=7){
        table_size = ts;
        table = new Node<T>*[table_size];
        current_size = 0;
        for(int i=0;i<table_size;i++){
            table[i] = NULL;
        }
    }
    void insert(string key,T value){
        int index = hashfunction(key);

        Node<T>*n = new Node<T>(key,value);
        //Insert at the head of the linked list with id = idx
        n->next = table[index];
        table[index] = n;
        current_size++;

        //rehash...
        float load_factor = current_size/(1.0*table_size);

        if(load_factor>0.7){

        }
    }
    T* search(string key){
        int index = hashfunction(key);
        Node<T>*temp = table[index];
        while(temp!=NULL){
            if(temp->key==key){
                return &temp->value;
            }
            temp = temp->next;
        }
        return NULL;
    }
    void erase(string key){

    }
    T& operator[](string key){
        T *f = search(key);
        if(f==NULL){
            T garbage;
            insert(key,garbage);
            f = search(key);
        }
        return *f;
    }
};

int main(){
    Hashtable<int> price_menu;
    price_menu.insert("Burger",120);
    price_menu.insert("Pepsi",20);
    price_menu.insert("BurgerPizza",150);
    price_menu.insert("Noodles",25);
    price_menu.insert("Coke",40);

    int *price = price_menu.search("Noodles");
    if(price==NULL){
        cout<<"Not Found!"<<endl;
    }
    else{
        cout<<"Price is "<<*price<<endl;
    }

    price_menu["Dosa"] = 60;
    cout<<"Dosa => "<<price_menu["Dosa"]<<endl;
    price_menu["Dosa"] +=10;
    cout<<"Updated Dosa Price => "<<price_menu["Dosa"]<<endl;
    return 0;
}
