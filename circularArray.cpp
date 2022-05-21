#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,q;
    cin >> n >> k >> q;
    deque<int> arr;

    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }    
    for (int i = 0; i < k; i++)
    {
        int temp = arr.back();
        arr.pop_back();
        arr.push_front(temp);
    }
    for(int i=0; i<q; i++){
        int num;
        cin >> num;
        cout << arr[num] << endl;
    }
    return 0;
}