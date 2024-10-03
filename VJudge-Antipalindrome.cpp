///Problema L - Antipalindrome
#include <bits/stdc++.h>
using namespace std;
bool Palindrome(string s)
{
    string new_s=s;
    reverse(new_s.begin(),new_s.end());
    if(new_s==s)
        return true;
    else
        return false;
}
string s;
int main (){
    ios_base::sync_with_stdio(false);
    cin>>s;
    if(Palindrome(s)==0){
        cout<<s.size();
        return 0;
    }
    else
    {
       s.erase(s.size()-1);
    }
    if(Palindrome(s))
        cout<<0;
    else
        cout<<s.size();
    return 0;
}

