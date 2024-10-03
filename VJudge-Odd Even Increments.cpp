#include <bits/stdc++.h>
using namespace std;
void Operatie_Par(int n, int a[])
{
    if(n%2==0)
    {
        for(int i=2;i<=n;i+=2)
            a[i]+=1;
    }
    else
    {
        for(int i=2;i<=n-1;i+=2)
        {
            a[i]+=1;
        }
    }
}
void Operatie_Impar(int n, int a[])
{
    if(n%2==1)
    {
        for(int i=1;i<=n;i+=2){
            a[i]+=1;
            a[i]=a[i]%2;
        }
    }
    else
    {
        for(int i=1;i<=n-1;i+=2){
            a[i]+=1;
            a[i]=a[i]%2;
        }
    }
}
int same_MOD2(int n, int a[])
{
    bool aceeasi_paritate=1;
    for(int i=1;i<=n-1;i++)
        for(int j=i+1;j<=n;j++)
            if(a[i]%2!=a[j]%2)
            {
                 aceeasi_paritate=0;
                 break;
            }
    return aceeasi_paritate;
}
int n,a[55];
int t;
int main (){
    ios_base::sync_with_stdio(false);
    cin>>t;
    while(t--)
    {
        cin>>n;
        int has_been_done=0;
        int nr_pare=0;
        int nr_impare=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                nr_pare++;
            else
                nr_impare++;
            a[i]=a[i]%2;
        }
        if(nr_impare==0 || nr_pare==0){
            cout<<"YES\n";
            continue;
        }
        else
        {
            while(same_MOD2(n,a)==0 && has_been_done<=1000)
            {
                if(nr_pare>nr_impare)
                    has_been_done++,Operatie_Impar(n,a);
                else
                    has_been_done++,Operatie_Par(n,a);
            }
        }
        if(has_been_done>1000)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
