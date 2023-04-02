#include<bits/stdc++.h>
using namespace std;
#define n 100


class stack
{
public:
int* array;
int top;
stack()
{
   array = new int(n);
   top = -1;
}

void push(int x)
{
    if(n-top >=1)
    {
        top++;
        array[top] = x;
    }
}

};


int main()
{
   stack s;
   s.push(1);


    return 0;
}