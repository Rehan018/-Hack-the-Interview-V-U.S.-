#include<bits/stdc++.h>

using namespace std;

#define N 100005

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int TESTS=1;
    //cin>>TESTS;
    while(TESTS--)
    {
        int n, i, j, k;
        cin >> n;
        int connection[n+1], self_loop = -1;
        for(i = 1; i <= n; i++){
            cin >> connection[i];
            if(i == connection[i]) self_loop = i;
        }

        int vis[n+1];
        memset(vis, 0, sizeof vis);
        int loops = 0;
        int col = 0;
        for(i = 1; i <= n; i++){ 
            if(vis[i] == 0){ 
                j = i, ++col;
                while(vis[j] == 0){
                    vis[j] = col; 
                    j = connection[j];
                }
                if(vis[j] == col) loops++; 
            }    
        }

        int ct = loops - 1 + (self_loop == -1);

        cout << ct << "\n";
    }
    return 0;
}
