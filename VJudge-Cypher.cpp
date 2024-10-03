#include <bits/stdc++.h>
using namespace std;
char c;
int a[105],t,n;
int operations;
int main (){
    std::ios_base::sync_with_stdio(false);
    std::cin>>t;
    while(t--)
    {
        std::cin>>n;
        for(int i=1;i<=n;i++)
        {
            std::cin>>a[i];
        }
        for(int i=1;i<=n;i++)
        {
            std::cin>>operations;
            for(int j=1;j<=operations;j++)
            {
                std::cin>>c;
                if(c=='U'){
                    if(a[i]==0)
                        a[i]=9;
                    else
                        a[i]--;
                }
                if(c=='D'){
                   if(a[i]==9)
                     a[i]=0;
                   else
                     a[i]++;
                }
            }
            cin.get();
        }
        for(int k=1;k<=n;k++)
            cout<<a[k]<<" ";
        cout<<'\n';
    }
    return 0;
}
