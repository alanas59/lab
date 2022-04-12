#include<iostream>
using namespace std;
int v[5],n;

int G[4][4] = {
    {0,1,0,1},
    {1,0,1,1},
    {1,0,0,1},
    {1,1,1,0},
};


void dfs(int i){
    v[i] = 1;
    cout<<i<<"\t";
    for(int j=0;j<n;j++){
        if(!v[j]&&G[i][j]==1){
            dfs(j);
        }
    }

}




int main()
{

    cout<<"Enter number of vertices:";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<G[i][j];
        }

        cout<<"\n";
    }


    dfs(0);




    return 0;
}
