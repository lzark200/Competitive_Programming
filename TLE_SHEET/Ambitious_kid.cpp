#include<bits/stdc++.h>
using namespace std ; 
int main (){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ; cin >> n ; 
    vector<int>arr ; 
    for(int i = 0 ; i < n ; i++){int x; cin >> x; arr.push_back(x);}
    if(find(arr.begin() , arr.end() , 0)!=arr.end()){
    	cout << "0" << endl ; 
    }
    else{
    	int min_val = INT_MAX ; 
    	for(int i = 0 ; i < n ;i++){
    		if(min_val > abs(arr[i]))min_val = abs(arr[i]) ; 
    	}
    	cout << min_val << endl ; 
    }
    
	
	return 0 ;
}
