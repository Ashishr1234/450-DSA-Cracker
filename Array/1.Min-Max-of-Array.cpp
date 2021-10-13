// Problem Statement
/* Write a program to print minimum and maximum of an array */


#include<bits/stdc++.h>
using namespace std;

void minMaxArray(vector<int> &arr)
{
    int n=arr.size()-1,mn=INT_MAX,mx=INT_MIN;
    for(int i=0;i<=n;i++)
    {
        if(arr[i]>mx)
            mx=arr[i];
        if(arr[i]<mn)
            mn=arr[i];
    }
    cout<<mn<<" "<<mx;
    return ;
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
    minMaxArray(arr);
    return 0;
}
