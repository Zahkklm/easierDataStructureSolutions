#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    multiset<int> inp;
    for(int i=0; i<n; i++){
        int x; 
        cin >> x;
        inp.insert(x);
    }

    int ans=0;
    multiset<int> mock_multiset;
    std::set<int>::iterator it = inp.begin();
    for(; it != inp.end(); it++){
        mock_multiset.clear();
        for(auto it_j = it; it_j != inp.end(); it_j++){
            if(it == it_j) { mock_multiset.insert(*it_j); continue; }
            
            if( abs(*it-*it_j) <= 1) mock_multiset.insert(*it_j);
        }
        ans = max(ans, (int)mock_multiset.size());
    }

    cout << ans;
}