#include <bits/stdc++.h>
using namespace std;
int arrows;
int a[15][15];
char c;
int main (){
    std::ios_base::sync_with_stdio(false);
    std::cin>>arrows;
    while(arrows--)
    {
        int s=0;
        for(int i=1;i<=10;i++)
        {
            for(int j=1;j<=10;j++)
            {
                std::cin>>c;
                if(c=='X')
                    a[i][j]=1;
                else
                    a[i][j]=0;
            }
        }
        for(int i=1;i<=10;i++)
        {
            for(int j=1;j<=10;j++)
            {
                if(a[i][j]==1)
                {
                    ///ring 1
                    bool gasit=0;
                    if((i==1) || (i==10) || (j==1) || (j==10)){
                        if(gasit==0){
                            s+=1;
                            gasit=1;
                        }
                    }
                    ///ring 5
                    if((i==5 && j==5) || (i==5 && j==6) || (i==6 && j==5) || (i==6 && j==6)){
                        if(gasit==0){
                            s+=5;
                            gasit=1;
                        }
                    }
                    ///ring 4
                    if((i==4 || i==7) && (j>=4 && j<=7)){
                        if(gasit==0){
                            s+=4;
                            gasit=1;
                        }
                    }
                    if((i>=5 && i<=6) && (j==4 || j==7)){
                        if(gasit==0){
                            s+=4;
                            gasit=1;
                        }
                    }
                    ///ring 3
                    if((i==3 || i==8) && (j>=3 && j<=8)){
                        if(gasit==0){
                            s+=3;
                            gasit=1;
                        }
                    }
                    if((i>=4 && i<=8) && (j==3 || j==8)){
                        if(gasit==0){
                            s+=3;
                            gasit=1;
                        }
                    }
                    ///ring2
                    if((i==2 || i==9) && (j>=2 && j<=9))
                    {
                        if(gasit==0)
                        {
                            s+=2;
                            gasit=1;
                        }
                    }
                    if((i>=3 && i<=9) && (j==2 || j==9)){
                        if(gasit==0)
                        {
                            s+=2;
                            gasit=1;
                        }
                    }
                }
            }
        }
        std::cout<<s<<'\n';
    }
    return 0;
}
