// Problem Statement
/* Given a string S, check if it is palindrome or not */

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    string t;
    t=s;
    reverse(t.begin(), t.end());
    if (s==t) {
    return true;
    }
    else {
    return false;
    }
}

int main()
{
    string str;
    cin>>str; // Enter String
    if (isPalindrome(str)) {
    cout<<"1";
    }
    else {
    cout<<"0";
    }
    return 0;
}
