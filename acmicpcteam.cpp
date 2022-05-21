#include <bits/stdc++.h>
using namespace std;

int return1s(string str)
{
    int count=0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == '1') count++;
    }
    return count;
}

int calculate_topics(string at1, string at2, int m)
{
    int count=0;
    for(int i=0; i<m; i++){
        if(at1[i] == '1' || at2[i] == '1') count++;
    }
    return count;
}

int main(){
    int n,m;
    cin >> n >> m;

    string m_list[n];

    for(int i=0; i<n; i++)
    {
        cin >> m_list[i];
    }

    int maxtopics=0, maxtopteam=1;
    // permutate
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(j==i) continue;
            // (i,j) Pair i.e (5,6)
            int res = calculate_topics(m_list[i], m_list[j], m);

            if(res > maxtopics){
                maxtopics = res;
                maxtopteam = 1;
            }
            else if(maxtopics == res){
                maxtopteam++;
            }
        }
    }
    cout << maxtopics << endl << maxtopteam;
    return 0;
}