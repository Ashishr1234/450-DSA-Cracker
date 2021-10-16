//LINEAR SEARCH
#include<iostream>
using namespace std;
int main()
{
    int n,c=0,x;
    cout<<"Enter the array size:";//Input array size
    cin>>n;
    int arr[n];
    cout<<"Enter the values:";//Inputting array values
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to search:";//Enter search element
    cin>>x;
    for(int i=0;i<n;i++)//Loop to search for the given element
    {
        if(arr[i]==x)
        {
            c=1;//Flag variable to check
            cout<<"Found at index "<<i;
            break;
        }
    }
    if(c==0)
    {
        cout<<"Searched element not found!";
    }
    return 0;
}
