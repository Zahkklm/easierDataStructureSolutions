#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin >> t;
    ll value;
    ll incamount=0;
    ll time=1;
    ll tempval;
    for (value = 3;; time+=value, value*=2)
    { 
        if(t >= time && t < time+value){
            tempval = value;
            for (ll i = time; ; i++)
            {
                if(i == t) break;
                tempval--;
            }            
            break;
        }                                                                                         
    }
    cout << tempval;
    
    return 0;
}