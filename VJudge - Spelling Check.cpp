///Problema M -SpellingCheck
#include <bits/stdc++.h>
#define DIM 1000005
using namespace std;
char s1[DIM],s2[DIM];
///apppa
///appa
///apappa
///apppa
///abccc
///abcc
///aanr
///ana
int answer=0;
int main (){
    std::ios_base::sync_with_stdio(false);
    std::cin>>s1;
    cin.get();
    std::cin>>s2;
    int poz=-1;
    int nr=0;
    for(int i=0;s1[i]!=0;i++)
    {
        if(s2[i]!=s1[i])
        {
           poz=i;
           nr++;
           break;
        }
    }
    /*for(int i=poz;s1[i]!=0;i++)
    {
        if(s2[i]!=s1[i])
        {
            nr++;
            break;
        }
    }*/
    int mergem_st;
    if(s1[poz+1]==s2[poz])
    {
        mergem_st=poz;
        while(s1[mergem_st]==s1[mergem_st-1] && mergem_st>=0)
            mergem_st--;
        answer=poz-mergem_st+1;
    }
    /*if(s1[poz-1]==s2[poz])
    {
        int mergem_dr=poz;
        while(s1[mergem_dr]==s1[mergem_dr+1] && mergem_dr<=strlen(s1)-1)
            mergem_dr++;
    }*/

    ///aanr
    ///ana
    for(int i=poz;s2[i]!=0;i++)
    {
        if(s2[i]!=s1[i+1])
        {
            answer=0;
            break;
        }
    }
    if(answer!=0)
    {
        std::cout<<answer<<'\n';
        for(int i=mergem_st;i<=poz;i++)
            std::cout<<i+1<<" ";
    }
    else
        std::cout<<0;
    return 0;
}
