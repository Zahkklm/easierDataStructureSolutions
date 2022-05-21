#include <bits/stdc++.h>
using namespace std;
void check_if_cavity(string arr[],int len, int i, int j)
{  
   char item=arr[i][j];
        if(arr[i][j-1] < item && arr[i][j+1] < item && arr[i-1][j] < item && arr[i+1][j] < item) arr[i][j] = 'X';
      
}

int main(){
    int n;
    cin >> n;
    string grid[n];
    for (int i = 0; i < n; i++)
    {
        string in;
        cin >> in;
        grid[i] = in;
    }

    for (int i = 1; i < n-1; i++)
    {
        for (int j = 1; j < n-1; j++)
        {
            check_if_cavity(grid, n, i, j);
        }
        
    }

    cout << "======================\n";
    for(string &x:grid) cout << x << endl;

    
    return 0;
}