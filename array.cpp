#include<bits/stdc++.h>
using namespace std;
/*   (LINAER SEARCH)
int linearSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++){
        if(arr[i] == key)
        {return i;
        }
        
    }
    return -1;
}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int key;
cin>>key;
cout<<linearSearch(arr,n,key);


return 0;
}
*/

/*   (BINARY SEARCH)
int binarySearch(int arr[], int n, int key)
{
int s=0;
int e = n;
while(s<=e){
    int mid = (s+e)/2;
    if(arr[mid] == key)
    {return mid;}
    
    else if(arr[mid] > key)
    {
        e = mid-1;
    }
    else
    {
        s = mid+1;
    }

}
return -1;
}


int main(){
    int n;
    cin>>n;int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr,n,key);

    return 0;
}
*/

/* (SELECTION SORT)

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;

            }
        }
    }

    for(int k=0;k<n;k++)
    { cout<<arr[k]<<" ";
    }

    return 0;
}
*/

/*  (BUBBLE SORT)

int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int counter = 1;
while(counter<n)
{
    for(int i=0;i<n-counter;i++)
    {
       if(arr[i]>arr[i+1])
       {
        int temp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1] = temp;
       }

    }
    counter++;
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}

*/



/*
int main()
{
   int mx =  -999999;
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }

   for(int i=0;i<n;i++)
   {
    mx = max(mx,arr[i]);
    cout<<mx<<"\n";
   }
return 0;    
}


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>ans;

        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=0;j<nums.size();j++){
                if(i != j){
sum=nums[i] +nums[j] ;
if(sum == target) {
    ans.push_back(i);
        // ans.push_back(j); 
break;
}

                }
            }
        }
                    return ans;

    }
    
};
*/

/*
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int curr=0;
        for(int j=i;j<n;j++)
        {
           curr += arr[j];
           cout<<curr<<"\n";

        }
    }
    
    return 0;
}
*/

/*
int main()
{
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
    cin>>arr[i];
 }
 for(int i=0;i<n;i++)
 {
    int curr = 0;
    for(int j=i;j<n;j++)
    {
        curr += arr[j];
        cout<<curr<<"\n";
    }
 }

    return 0;
}
*/


int main()
{ int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{ 
   cin>>arr[i];

}
int count = 0;
int val;
cin>>val;
for(int i=0;i<n;i++)
{ 
    if(arr[i] != val)
    {
        arr[count++] = arr[i];
    }
}
for(int i=0;i<n;i++)
{ cout<<arr[i]<<" ";
  
}
    return 0;
}
// User function template for C++

