#include <bits/stdc++.h>
using namespace std;
int x,y,z,t1,t2,t3;
int pe_scari,cu_liftul;
int main (){
    ios_base::sync_with_stdio(false);
    cin>>x>>y>>z>>t1>>t2>>t3;
    int aux=x;
    if(z>aux)
    {
        while(z!=aux)
        {
            cu_liftul+=t2;
            z--;
        }
    }
    else if(z<aux)
    {
        while(z!=aux)
        {
            cu_liftul+=t2;
            z++;
        }
    }
    cu_liftul+=t3; ///deschide usa
    cu_liftul+=t3; ///inchide usa
    ///puteam sa scriu direct +=2*t3;
    if(y>aux)
    {
        while(aux!=y)
        {
            aux++;
            pe_scari+=t1;
            cu_liftul+=t2;
        }
    }
    else if(y<aux)
    {
        while(aux!=y)
        {
            aux--;
            pe_scari+=t1;
            cu_liftul+=t2;
        }
    }
    cu_liftul+=t3; ///deschide usa
    ///cu_liftul+=t3; ///inchide usa
    if(cu_liftul<=pe_scari)
        cout<<"YES";
    else
        cout<<"NO";
    ///cout<<'\n';
    ///cout<<pe_scari<<" "<<cu_liftul;
    return 0;
}
