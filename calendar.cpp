#include <bits/stdc++.h>
using namespace std;
int main(){
    int d,m,w;
    int in_d, in_m, in_y;
    char string1[26] = "abcdefghijklmnopqrstuwxyz";

    cin >> d >> m >> w;
    cin >> in_d >> in_m >> in_y;

    int res =  (in_d + ((in_m-1)*d))-1;
    int res2 = (d)*m * (in_y-1);
    int sol = (res + res2) % w;
    
    cout << string1[sol];
    return 0;
}