#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(),x.end());
#define ll long long
int par[1005];
int find(int node)
{
    if (par[node]==-1)
    return node;


    
        
   int lider =find(par[node]);

    return lider;
    
}

 int main()

{
    memset(par,-1,sizeof(par));
    par[0]=1;
    par[1]=-1;
    par[2]=1;
    par[3]=1;
    par[4]=5;
    par[5]=3;
    
    cout<<find(4)<<endl;
    

    return 0;
}