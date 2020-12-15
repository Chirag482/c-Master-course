
#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*next;

    //constructor
    node(int d){
        data = d;
        next = NULL;
    }
};

//passing a pointer by refrence
void insertAtHead(node*&head,int d){
    if(head == NULL){
        head = new node(d);  //here we use dynamically allocation becuz if we use static allocation here than after the exceution of the function the linked will be deleted
        return;
    }
    node *n = new node(d);
    n->next = head;
    head = n;
}
void insertAtTail(node*&head,int d){
    if(head==NULL){
        head = new node(d);
        return ;
    }
    node*tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->next = new node(d);
    return ;
}
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<" ,";
        head = head->next;
    }
}
int length(node*head){
    int cnt = 0;
    while(head!=NULL){
        cnt++;
        head = head->next;
    }
    return cnt;
}
//input function
node* take_input(){
    int d;
    cin>>d;
    node*head = NULL;
    while(d!=-1){
        insertAtTail(head,d);
        cin>>d;
    }
    return head;
}

ostream& operator<<(ostream &os, node*head){
    print(head);
    return os;
}
istream& operator>>(istream &is,node*&head){
    head = take_input();
    return is;
}


//Merge two sorted Linked lists
node* merge(node*a,node* b){
    //base case
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }

    node* c;
    //rec case
    if(a->data < b->data){
        c = a;
        c->next = merge(a->next,b);
    }
    else{
        c= b;
        c->next= merge(a,b->next);
    }
    return c;
}

int main()
{
    node*head;
    node*head2;
    cin>>head>>head2;
    cout<<head<<endl<<head2<<endl;

    node* newhead = merge(head,head2);
    cout<<newhead<<endl;
    return 0;
}
