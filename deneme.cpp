//Brace your keyboard
//inzva community built algoleague for every algorithm enthusiast hungry for self-improvement and friendly competition. Have fun and good luck!

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ll;
/*
ll comb( int n, int k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    ll res = n;
    for( int i = 2; i <= k; ++i ) {
        res *= (n-i+1);
        res /= i;
    }
    return res;
}
*/
int fact(int n);
 
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
// Returns factorial of n
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int main() {
    int q,k;
    cin >> q >> k;
    int count=0;
    for(int h=0; h<q; h++){
        int n,m; 
        cin >> n >> m;
        for(int i=0; i<=n; i++){
            for(int j=0; j<=min(i,m); j++){
                if(nCr(i,j) % k == 0){
                    count++;
                }            
            }
        }
    }
   
    cout << count;
	return 0;
}
