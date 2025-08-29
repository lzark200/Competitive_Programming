#include <bits/stdc++.h>
using namespace std;

bool check(string s1, string s2) {
    return s1.find(s2) != string::npos;
}

int solve(){
	
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    
    string temp = x;
    for(int i = 0 ; i < 6 ; i++){
    	if(check(temp , s)){
    		return i ; 
    	}
    	temp.append(temp) ; 
    }
    return -1 ; 
    
}

int main() {
    int t ; cin >> t;
    while(t-->0)cout << solve() << endl; 
    return 0;
}