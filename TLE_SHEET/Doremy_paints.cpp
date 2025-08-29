#include<bits/stdc++.h>
using namespace std ; 
int main (){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ; 
    cin >> t; 
    while(t-->0){
    	int n  ; 
    	cin >> n ; 
    	vector<int>arr ; 
    	for(int i = 0 ; i < n ; i++){int x; cin >> x; arr.push_back(x);}
    	unordered_map<int , int>mp ; 
    	for(int i = 0 ;i < n ; i++){
    		mp[arr[i]]++ ; 
    	}
    	bool iscont = false ; 
    	
    	for(auto it : mp){
    		if(it.second == n || it.second == n/2){
    			iscont = true ; 
    			break;
    		}
    	}
    	
    	if(iscont && mp.size() <= 2)cout << "YES" << endl ; 
    	else cout << "NO" << endl ; 
    }
	
	return 0 ;
} 
