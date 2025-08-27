//Problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B
#include<bits/stdc++.h>
using namespace std ; 
int main (){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string st ; 
    getline(cin , st) ; 
    size_t pos = st.find('\\') ; 
    
    if(pos == string::npos){
    	cout << st << endl ; 
    }
    else {
    	cout << st.substr(0 , pos)  << endl; 
    }
	
	return 0 ;
}
