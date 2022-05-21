#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[100];

    int chars[26];
    for (size_t i = 0; i < 28; i++)
    {
        chars[i] = 0;
    }
    

    string input;
    getline(cin, input);
    for (int i = 0; i < input.length(); i++)
    {
        s[i] = input[i];
        chars[(int)s[i]-97]++;
    }

    
    for (int i = 0; i < 26; i++)
    {
        if(chars[i] % 2 == 0) chars[i] = -1;
        
    }

    unordered_set<char> olist;
    for (int i = 0; i < 26; i++)
    {
        if(chars[s[i]-97] != -1)
        {
            olist.insert(s[i]);
        }     
    }
    
    deque<char> order;
    auto it = olist.begin();
    for (int i = 0; i < olist.size(); i++, it++)
    {
        char c=*it;
        order.push_back(c);
    }

    string res="";
    for(int i = 0; i < input.length(); i++)
    {
        if(chars[s[i]-97] > 0){
            if(chars[s[i]-97] == 1){
                res+=order.front();
                order.pop_front();
            }
            chars[s[i]-97]--;            
        }
        
    }
    if(res.size() == 0) cout << "Empty String";
    else for(char x:res) cout << x;
}