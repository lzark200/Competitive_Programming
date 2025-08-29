#include<bits/stdc++.h>
using namespace std ; 
int main (){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ; cin >> t; 
    while(t-->0){
    	int n , k ; 
    	cin >> n >> k ; 
    	bool flag = false ; 
    	while(n--){
    		int x; cin >> x; 
    		if(x == k){
    			flag = true ;
    			break;
    		}
    	}
    	if(flag) cout << "YES" << endl; 
    	else cout << "NO" << endl ; 
    }
	return 0 ;
}
