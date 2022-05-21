#include <bits/stdc++.h>
using namespace std;
string sort_order(string str)
{
    char temp;
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9 - i; ++j) {
            if (str[j] < str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    return str;
}
int main(){
    string str = "bca";
    cout << "deneme: " << sort_order(str);
}