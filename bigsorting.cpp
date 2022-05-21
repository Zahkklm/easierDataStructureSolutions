#include <bits/stdc++.h>
using namespace std;
bool compare(string str1, string str2)
{
 //   int buyukolan=min(str1.size(), str2.size());
    unsigned long long int len=str1.size();
    for(unsigned long long int i=0; i<len; i++)
    {
        if(str1[i] > str2[i]) return true;
        else if(str1[i] < str2[i]) return false;
    }
    return true;
}

bool myfunction (string i,string j) { 
    unsigned long long int is= i.size();
    unsigned long long int js= j.size();
    return (is<js); 
}

int main(){
    int n;
    cin >> n;
    string arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // bubble sort
    /*
    for (int i = 0; i < n-1; i++)    
    {
    // Last i elements are already in place
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j].size() > arr[j+1].size()){
                swap(arr[j], arr[j+1]);
            }
            else if (arr[j].size()  == arr[j+1].size() && compare(arr[j], arr[j+1]))
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    */
    int N = sizeof(arr)/sizeof(arr[0]); //Get the array size

    sort(arr, arr+N, myfunction); //Use the start and end like this

    for(string x:arr){
        cout << x << endl;
    }

    return 0;
}