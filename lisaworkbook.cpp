#include <bits/stdc++.h>
using namespace std;

int calculate_next_page(int page, int modulo)
{
    if(page % modulo > 0) return 1;
    else return 0;
}
int main(){
    int n,k;
    cin >> n >> k;

    int arr[n];
    int arrx[n];

    for (int i = 0; i < n; i++)
    {
        int inp;
        cin >> inp;
        arr[i] = inp;
        arrx[i] = inp % k;
    }

    int page=1;
    int nextpage=arrx[0]+page+1;
    int chapter=1;

    int special=0;
    while(chapter<=n)
    {
        // walk the chapters
        for (int i = 1; i <= arr[chapter-1]; i++)
        // walk the pages
        {            
            if(page == i) {
                special++;
            } 
            if(i%k==0) 
                page+=calculate_next_page(page,k)+1;
        }
        
    //    page = arr[chapter] / k + page + calculate_next_page(page, k) + 1;
        chapter++;        
    }

    cout << special;
}