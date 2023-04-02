#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
  vector<int> v;
  cout<<"capacity->"<<v.capacity();
  v.push_back(1);
  cout<<endl<<"capacity->"<<v.capacity();

  v.push_back(2);
  cout<<endl<<"capacity->"<<v.capacity();

  v.push_back(3);
  cout<<endl<<"capacity->"<<v.capacity();

  v.push_back(4);
  cout<<endl<<"capacity->"<<v.capacity();

  v.push_back(5);
  cout<<endl<<"capacity->"<<v.capacity();

  cout<<endl<<"size->"<<v.size();

  cout<<endl<<"element->"<<v.at(3);
  cout<<endl;

  for(int i:v)
  {
    cout<<i<<" ";
  }
  cout<<endl;

  v.pop_back();

  for(int i:v)
  {
    cout<<i<<" ";
  }
  cout<<endl;
  v.pop_back();
  cout<<"capacity->"<<v.capacity();
  */

/*
 vector<int> a(5,0);
 cout<<"vector a : ";
 for(int i:a)
 {
    cout<<i<<" ";
 }
 vector<int> last(a);
 cout<<endl<<"last vector copy the vector a : ";

 for(int i:last)
 {
    cout<<i<<" ";
 }
 */

vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(76);
v.push_back(32);
v.push_back(31);
v.push_back(98);
v.push_back(10);
cout<<"first element->"<<v.front()<<endl;
cout<<"first element->"<<v.back();



  


    return 0;
}





void solve(Node<int>* first, Node<int>* second) {
    
    
    Node* curr1 = first;
    Node* next1 = curr1 -> next;
    
    Node* curr2 = second;
    Node* next2 = curr2 -> next;
    
    while(next1 != NULL && curr2 != NULL) {
        
        if( (curr2 -> data >= curr1 -> data ) 
           && ( curr2 -> data <= next1 -> data)) {
            
            curr1 -> next = curr2;
            curr2 -> next = next1;
            curr1 = curr2;
            curr2 = next2;
        }
       
        
    }
    

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(first == NULL)
        return second;
    
    if(second == NULL)
        return first;
    
    if(first -> data <= second -> data ){
        solve(first, second);
    }
    else
    {
        solve(second, first);
    }
}
