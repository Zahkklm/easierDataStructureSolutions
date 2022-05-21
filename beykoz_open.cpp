#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    set<int> sadik;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        sadik.insert(num);
    }

    vector<int> ekin(N);
    for (int i = 0; i < N; i++)
    {
        cin >> ekin[i];
    }

    bool mission = true;
    set<int>::iterator ite;
    for (int i = 0; i < N; i++)
    {
        ite = sadik.lower_bound(ekin[i]+1);
        if(ite != sadik.end()){
            sadik.erase(ite);
        }
        else {
            mission = false;
            break;
        }
    }
    
    cout << (mission ? "Possible" : "Impossible");
    return 0;
}