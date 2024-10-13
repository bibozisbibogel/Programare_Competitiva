/// Link Problema Codeforces - https://codeforces.com/contest/1907/problem/B
#include <bits/stdc++.h>
#define DIM 1000005
using namespace std;
string s;
int main (){
    ios_base::sync_with_stdio(false);
    int tests;
    cin>>tests;
    while(tests--)
    {
        cin>>s;
        stack<int> sta,stA;
        bool ok[s.size()]={0};
        for(int i=0;i<s.size();i++)
        {
            if(isupper(s[i]) && s[i]!='B')
                stA.push(i);
            if(isupper(s[i]) && s[i]=='B')
            {
                ok[i]=1;
                if(!stA.empty()){
                    ok[stA.top()]=1;
                    stA.pop();
                }
            }
            if(islower(s[i]) && s[i]!='b')
                sta.push(i);
            if(islower(s[i]) && s[i]=='b')
            {
                ok[i]=1;
                if(!sta.empty()){
                    ok[sta.top()]=1;
                    sta.pop();
                }
            }
        }
        for(int i=0;i<s.size();i++)
            if(ok[i]==0)
                cout<<s[i];
        cout<<'\n';
    }
    return 0;
}
