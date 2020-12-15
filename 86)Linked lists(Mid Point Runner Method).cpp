
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

//functions (Procedural Programming)
void build(){

}

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

void insertAtMiddle(node*&head,int d,int p){
    //corner case
    if(head == NULL or p==0){
        insertAtHead(head,d);
        return ;
    }
    else if(p>length(head)){
        insertAtTail(head,d);
    }
    //middle case
    else{
        //take p-1 jumps to reach the desired position
        int jump = 1;
        node*temp = head;
        while(jump<=p-1){
            temp = temp->next;
            jump++;
        }
        //create a new node
        node*n = new node(d);
        n->next = temp->next;
        temp->next = n;
    }
}

void deleteHead(node*&head){
    if(head == NULL){
        return;
    }
    node*temp = head->next;
    delete head;
    head = temp;
}
void deleteTail(node*&head){
    if(head==NULL){
        deleteHead(head);
    }
    node*tail = head;
    node*prev = head;
    while(tail->next!=NULL){
        prev = tail;
        tail = tail->next;
    }
    delete tail;
    prev->next = NULL;
    return ;
}

void deleteAtMiddle(node*&head ,int p){
    int jump =1;
    node*temp = head;
    node*prev = head;
    while(jump<=p){
        prev = temp;
        temp = temp->next;
        jump++;
    }
    prev->next = temp->next;
    delete temp;
    return;
}


//searching operation
//Linear Search
bool search(node*head,int key){
    node*temp = head;
    while(temp!=NULL){
        if(key==temp->data){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
//search function recursively
bool searchRecursive(node*head,int key){
    if(head==NULL){
        return false;
    }
    if(head->data == key){
        return true;
    }
    else{
        return searchRecursive(head->next,key);
    }
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

void reverse(node*&head){
    node* c= head;
    node* p = NULL;
    node* n;
    while(c!=NULL){
        //save the next node
        n = c->next;
        //make the current node point to prev
        c->next = p;
        //update p and c (take them 1 step forward)
        p = c;
        c = n;
    }
    head = p;
    //complexity => 0(N)[time] and o(1)[Space]
}
//recursively reverse a linked list(a ques at amazon interview)
node* recReverse(node*head){
    if(head->next==NULL or head == NULL){
        return head;
    }
    //rec case
    node* shead = recReverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return shead;
    //complexity => O(N)[Time] and O(N)[Space becuz of stack memory used in recursion]
    //so recursive method is not so efficient
}

//Mid poit Runner Method
node* midpoint(node*head){
    if(head==NULL or head->next == NULL){
        //No node or only one Node
        return head;
    }
    node*slow = head;
    node*fast = head->next;

    while(fast!=NULL and fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

int main()
{
    //node*head = take_input();
    //node*head2 = take_input();
    node*head;
    node*head2;
    cin>>head>>head2;

    //reverse(head);
    //reverse(head2);
    //head = recReverse(head);
    //head2 = recReverse(head2);

    cout<<head<<endl<<head2<<endl;

    node* mid = midpoint(head);
    cout<<mid->data<<endl;

    /*insertAtHead(head,5);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,0);

    insertAtMiddle(head,4,3);
    insertAtTail(head,7);

    deleteHead(head);
    deleteTail(head);
    deleteAtMiddle(head,1);
    print(head);
    cout<<endl;
    if(searchRecursive(head,4)){
        cout<<"Founded"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    if(search(head,6)){
        cout<<"founded"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }*/
    return 0;
}





