///ce am inteles din problema:
/*
        Daca sortam vectorul preturilor, problema face urmatoarele lucruri:
    -afla ultimele x numere
    -face y de minim (cele mai mici 2,3, etc)
    -afiseaza suma lor
*/
#include <bits/stdc++.h>
#define DIM 200005
using namespace std;
int n;
int q;
long long s[DIM],v[DIM];
int main (){
    ios_base::sync_with_stdio(false);
    cin>>n>>q;
    int x,y;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    sort(v+1,v+n+1);
    ///ca sa eficientizam ideea pornita de la deducerea formulei pozitiei, o sa folosim sumele partiale
    /*  pozitia = n-x+y (ex pentru: 1 2 3 5 5)
        la noi programul o sa se duca pe pozitia 4 unde se afla primul 5
        si porneste spre pozitia n-x care in cazul nostru este 2

        DAR PE NOI NE INTERESEAZA DOAR SUMELE PANA IN PUNCTUL RESPECTIV
        suma noastra = s[n-x+y] - s[n-x]

        ex:

        s[0]=0;
        s[1]=s[0]+a[1]=0+1=1;
        s[2]=s[1]+a[2]=1+2=3;
        s[3]=s[2]+a[3]=3+3=6;
        s[4]=s[3]+a[4]=6+5=11;
        s[5]=s[4]+a[5]=11+5=16;

        s[n-x+y] = s[5-3+2]=s[4]=11
        s[n-x] = s[5-3]=s[2]=3

        deci sum=s[n-x+y]-s[n-x]=11-3=8

    */
    for(int i=1;i<=n;i++)
    {
        s[i]=s[i-1]+v[i];
    }
    while(q--)
    {
        long long sum=0;
        cin>>x>>y;
        int poz=n-x+y;
        int destinatie=n-x;
        sum=s[poz]-s[destinatie];
        cout<<sum<<'\n';
    }
    return 0;
}
