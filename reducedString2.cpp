#include <bits/stdc++.h>
using namespace std;
void shift_left(string s, int pos)
{
    for (int i = pos; i < s.length()-1; i++)
    {
        s[i] = s[i+1]; 
    }        
}

int main(){
    string s;
    cin >> s;

  
   
        for (int i = 0; i < s.length()-1; i++)
        {
            if(s[i] == s[i+1]) {
                s[i] = s[i+1] = 'A';
                shift_left(s,i);
                i--;
            }        
        }
    
    

    if(s.empty()) cout << "Empty String";
    else cout << s;
    
    
}