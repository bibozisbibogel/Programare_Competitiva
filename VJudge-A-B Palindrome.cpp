#include <bits/stdc++.h>
using namespace std;
int t,a,b;
bool palindrom(string s)
{
    string new_s=s;
    reverse(new_s.begin(),new_s.end());
    if(new_s==s)
        return true;
    else
        return false;
}
bool verifica(string s)
{
    int nr0=0;
    int nr1=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
            nr0++;
        if(s[i]=='1')
            nr1++;
    }
    if(nr0==a && nr1==b)
        return true;
    else
        return false;
}
int nr0,nr1;
bool ok,ok2;
string s;
int left0,left1; ///zerouri sau 1 ramasi
int main (){
        std::ios_base::sync_with_stdio(false);
        std::cin>>t;
        while(t--)
        {
            std::cin>>a>>b;
            std::cin>>s;
            ok=false;
            ok2=false;
            nr0=0;
            nr1=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='?')
                {
                    ok=true;
                    break;
                }
            }
            if(ok==false)
            {
                if(palindrom(s) && verifica(s))
                {
                    std::cout<<s<<'\n';
                    continue;
                }
                else
                {
                    std::cout<<"-1"<<'\n';
                    continue;
                }
            }
            else
            {
                for(int i=0;i<s.size();i++)
                {
                    if(s[i]=='0')
                        nr0++;
                    if(s[i]=='1')
                        nr1++;
                }
                if(nr0>a || nr1>b)
                {
                    std::cout<<"-1"<<'\n';
                    continue;
                }
                left0=a-nr0;
                left1=b-nr1;
                for(int i=0;i<s.size();i++)
                {
                    if(i>=s.size()-i-1)
                        break;
                    if(s[i]!='?' && s[s.size()-i-1]!='?' && s[i]!=s[s.size()-i-1])
                    {
                        std::cout<<"-1"<<'\n';
                        ok2=true;
                        break;
                    }
                    if(s[i]=='?' && s[s.size()-i-1]!='?')
                    {
                        if(s[s.size()-i-1]=='0')
                        {
                             s[i]='0';
                             left0--;
                        }
                        else
                            if(s[s.size()-i-1]=='1')
                            {
                                s[i]='1';
                                left1--;
                            }
                    }
                    else
                        if(s[i]!='?' && s[s.size()-i-1]=='?')
                        {
                            if(s[i]=='0')
                            {
                                s[s.size()-i-1]='0';
                                left0--;
                            }
                            else
                                if(s[i]=='1')
                                {
                                    s[s.size()-i-1]='1';
                                    left1--;
                                }
                        }
                }
                if(ok2==1)
                    continue;
                for(int i=0;i<s.size();i++)
                {
                    if(i>s.size()-i-1)
                        break;
                    if(s[i]=='?'&&(left0>=1 || left1>=1)&&i==s.size()-i-1)
                    {
                        if(left0==1)
                        {
                            s[i]='0';
                            left0--;
                        }
                        else
                        {
                            s[i]='1';
                            left1--;
                        }
                    }
                    if(s[i]=='?' && left0>=2)
                    {
                        s[i]='0';
                        s[s.size()-i-1]='0';
                        left0=left0-2;
                    }
                    else
                        if(s[i]=='?' && left1>=2)
                        {
                            s[i]='1';
                            s[s.size()-i-1]='1';
                            left1=left1-2;
                        }
                }
                for(int i=0;i<s.size();i++)
                {
                    if(s[i]=='?')
                    {
                        ok2=true;
                        std::cout<<"-1"<<'\n';
                        break;
                    }
                }
                if(ok2==1)
                    continue;
                if(palindrom(s)&&verifica(s))
                    std::cout<<s<<'\n';
                else
                    std::cout<<"-1"<<'\n';
            }
        }
        return 0;
}
