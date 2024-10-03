///Problema R - Bad Prices
#include <bits/stdc++.h>
#define DIM 150005
using namespace std;
int t,n,v[DIM];
int poz[DIM];
int main (){
    ios_base::sync_with_stdio(false);
    cin>>t;
    while(t--)
    {
        cin>>n;
        int nr=0;
        ///int maxim_pana_acolo[DIM]={0};
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
           /// poz[v[i]]=i;
            ///maxim_pana_acolo[i]=max(maxim_pana_acolo[i-1],v[i]);
        }
        ///sort(v+1,v+n+1);
       /*for(int i=1;i<=n;i++)
        {
            cout<<v[i]<<" "<<poz[v[i]]<<'\n';
        }
        */

        /*for(int i=1;i<=n-1;i++)
        {
            int found=0;
            for(int j=i+1;j<=n&&found==0;j++)
            {
                if(v[i]>v[j])
                {
                    nr++;
                    found=1;
                }
            }
        }
        */
        /*int found=0;
        for(int i=1;i<n && found==0;i++)
        {
            found=0;
            if(maxim_pana_acolo[i]!=v[i])
            {
                nr++;
                found=1;
            }
        }
        */
        int Minim=INT_MAX;
        for(int i=n;i>=1;i--)
        {
            if(v[i]>Minim)
            {
               nr++;
            }
            Minim=min(Minim,v[i]);
        }
        cout<<nr<<'\n';
    }
    return 0;
}
