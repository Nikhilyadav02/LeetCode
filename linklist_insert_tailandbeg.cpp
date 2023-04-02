#include<bits/stdc++.h>
using namespace std;

class node{
public:
int data;
node* next;
node(int val)
{
    data = val;
    next = NULL;
}
};

void print(node* &head)
{
    node* np = head;
    while(np != NULL)
    {
        cout<<np->data<<"->";
        np = np->next;
    }
    cout<<"NULL";
}

void insertbeg(node* &head, int val)
{
    node* n = new node(val);
    n->next = head;
    head = n;
}

void inserttail(node* head, int val)
{
    node* n = new node(val);
    if(n == NULL){
        head = n;
    }
    else{
        node* temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
}

int length(node* head)
{    
   int l=1;
   node* temp = head;
   while(temp->next != NULL)
   {
    l++;
    temp = temp->next;
   }
   return l;

}

int main(){
    node* head = new node(1);
    node* tail = new node(2);
    head->next = tail;
    tail->next = NULL;


    insertbeg(head,2);
    inserttail(head,5);
    cout<<length(head)<<endl;
    print(head);
    

    return 0;
}