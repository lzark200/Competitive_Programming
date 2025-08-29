#include<bits/stdc++.h>
using namespace std ; 
int main ()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string x ; cin >> x ; 
    string s = "hello" ; 
    int j = 0 , i = 0 ; 
    while(j < x.size()){
    	if(s[i] == x[j]){i++ ; j++;}
    	else if(s[i]!=x[j])j++ ; 
    }
    (i == s.size())?cout << "YES" : cout << "NO" ; 
    cout << endl ; 
	
	return 0 ;
}
