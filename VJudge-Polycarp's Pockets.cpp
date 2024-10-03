#include <bits/stdc++.h>
using namespace std;
int n,v[105];
///int a[55],b[55]; ///prima jumatate este a si a 2-a jumatate este b
int fr[105];
/*int CautareBinara(int n,int v[],int x)
{
    int st=1;
    int dr=n;
    while(st<=dr)
    {
        int mid=(st+dr)/2;
        if(v[mid]==x)
            return 1;
        else
            if(v[mid]<x)
                st=mid+1;
            else
                dr=mid-1;
    }
    return 0;
}*/
int main (){
    ios_base::sync_with_stdio(false);
    cin>>n;
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        fr[v[i]]++;
    }
    ///int elem1=0,elem2=0;
    /*for(int i=1;i<=n;i++)
    {
        if(CautareBinara(v[i])==1)
        {
            b[++elem2]=v[i];
        }
        else
            a[++elem1]=v[i];
    }*/
    int Max=0;
    for(int i=1;i<=n;i++)
        Max=max(Max,fr[v[i]]);
    cout<<Max;
    return 0;
}

