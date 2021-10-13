// Problem Statement
/* Write a program to reverse an array or string */

#include<bits/stdc++.h>
using namespace std;

vector<int> reverseArray(vector<int> &arr)
{
    int n=arr.size()-1,temp;
    for(int i=0;i<=n;i++)
    {
        temp=arr[i];
        arr[i]=arr[n];
        arr[n]=temp;
        n--;
    }
    return arr;
}

int main()
{
    int n;
    cout<<"Enter length of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array"<<endl;
    for (int i=0; i<arr.size(); i++) 
    {
        cin>>arr[i];
    }
    reverseArray(arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
