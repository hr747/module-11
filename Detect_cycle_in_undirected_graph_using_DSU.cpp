#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(),x.end());
#define ll long long
int par[1005];
int node_siz[1005];
int find(int node)
{
    if (par[node] == -1)
        return node;

    int lider = find(par[node]);
    par[node] = lider;

    return lider;
}
void dsa_unino(int node1,int node2)
{
    int lider1=find(node1);
    int lider2=find(node2);
    if(node_siz[lider1]>=node_siz[lider2])
    {
        par[lider2]=lider1;
        node_siz[lider1]+=node_siz[lider2];
    }
    else
    {
        par[lider1]=lider2;
        node_siz[lider2]+=node_siz[lider2];

    }
    

}

 int main()

{
     memset(par, -1, sizeof(par));
    memset(node_siz,1,sizeof(node_siz));
    int n,e;
    cin>>n>>e;
    bool cycle=false;
    while (e--)
    {
        /* code */
        int a,b;
        cin>>a>>b;
        int lidera=find(a);
        int liderb=find(b);
        if(lidera==liderb)
        cycle=true;
        else
        dsa_unino(a,b);


    }
    if(cycle)
    cout<<"cycle detected"<<endl;
    else
    cout<<"NO cycle"<<endl;
    

    return 0;
}