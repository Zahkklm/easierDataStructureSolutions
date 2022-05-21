#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

string compare_str(string ss, string ss2)
{
    int lesser_len = min(ss.size(), ss2.size());
    bool firststring=true, secondstring=true;
    for(int i=0; i<lesser_len; i++){
        if(ss[i] > ss2[i]){ // bigger order in alphabet
            firststring = false;
        }
        else if(ss2[i] < ss[i]){ // bigger order in alphabet
            secondstring = false;
        }
    }
    if(firststring) return ss;
    else if(secondstring) return ss2;
    return " "; 
}

int main() {
    int n; 
    cin >> n;
    int count=0;
    string prev="a";
    bool first=true;
    for(int i=0; i<n; i++){
        string inp; 
        cin >> inp;
        if(first && compare_str(inp, prev) == inp){
            count += 2;
            first=false;
        }
        else if(compare_str(inp, prev) == inp){
            count += 1;
        }
        prev = inp;
    }
    cout << count;
    return 0;
}
