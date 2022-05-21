#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,c,m;
        cin >> n >> c >> m;
        int res=n/c;
        int wrapper = res; // kalan = wrapper
        int chocolate = 0;
        while(1){
            if(wrapper < m) break; 
            chocolate = wrapper / m;
            res += chocolate;
            wrapper %= m;
            wrapper += chocolate; 

            chocolate = 0;
                                 
        }
        cout << res << endl;
    }
}