
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

node* midpoint(node*head){
    int i = length(head);
    if(i%2==0){
        i = i/2;
        i--;
    }
    else{
        i = i/2;
    }
    node* mid= head;
    for(int j=0;i<i;i++){
        mid = mid->next;
    }
    return mid;
}

//input function
node* take_input(){
    int d;
    cin>>d;
    node*head = NULL;
    while(d!=-1){
        insertAtHead(head,d);
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

//Merge sort
node* mergesort(node*head){
    //base case
    if(head == NULL or head->next==NULL){
        //one or no node case
        return head;
    }

    //rec case
    //1.Break through mid point
    node* mid = midpoint(head);
    node* a = head;
    node* b = mid->next;
    mid->next = NULL;

    //2. rec sort thwe two parts
    a= mergesort(a);
    b= mergesort(b);

    //3)merge them
    node* c = merge(a,b);
    return c;
}

int main()
{
    node*head;
    cin>>head;
    cout<<head<<endl;

    node* newhead = mergesort(head);
    cout<<newhead<<endl;
    return 0;
}

