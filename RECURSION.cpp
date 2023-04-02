#include <bits/stdc++.h>
using namespace std;

/*int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int ans = factorial(n - 1);
    int ans1 = n * ans;

    return ans1;
}
*/

int power(int n)
{
    if(n == 0){
        return 1;
    }
    int small = power(n-1);
    int big = 2* small;
    
    return big;


}

int main()
{
    
   int n;
   cin>>n;
   int ans = power(n);
   cout<<ans;
    return 0;
}