/*
*author: yashpaliwal
*codeforces practice problem 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);


int main()
{
    fast; //fast execution for cp
    string ip1, ip2;
    cin>>ip1>>ip2;
    
    string ans="";
    
    for(int i=0; i<ip1.length();i++){
        if(ip1[i] == ip2[i])
            ans+="0";
        else
            ans+="1";
    }
    
    cout<<ans<<endl;

    return 0;
}