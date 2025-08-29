#include<bits/stdc++.h>
using namespace std ; 
int main (){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ; 
    cin >> t;  
    while(t-->0){
    	int n ; cin >> n ; 
    	vector<int>arr ; 
    	for(int i = 0; i < n ; i++){int x; cin >> x ; arr.push_back(x) ;}
    	int max_elem = INT_MIN ; 
    	for(int i = 0 ; i < n ; i++){
    		max_elem = max(max_elem , arr[i]) ; 
    	}
    	if(max_elem <= n && arr[0] == 1)cout << "YES" << endl; 
    	else cout << "NO" << endl ; 
    }
	
	return 0 ;
}
