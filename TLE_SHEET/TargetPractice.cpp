#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int t;
    cin >> t; 
    while (t--) {
        
        int sum = 0;
        vector<vector<char>> mat(10, vector<char>(10));
 
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                char c;
                cin >> c;
                mat[i][j] = c;
                if (c == 'X') {
                    int layer = min({i, j, 9 - i, 9 - j});
                    sum += layer + 1;
                }
            }
        }
 
        cout << sum << endl;
    }
    return 0;
}


































// #include<bits/stdc++.h>
// using namespace std ; 
// int returnPoint(int i , int j)
// {
	// int point = 0 ; 
	// if(i == 1 || i == 10 || j == 1 || j == 10)point+=1 ;
	// else if(i == 2 || i == 9 || j == 2 || j == 9)point+=2 ;
	// else if(i == 3 || i == 8 || j == 3 || j == 8)point+=3 ;
	// else if(i == 4 || i == 7 || j == 4 || j == 7)point+=4 ;
	// else if(i == 5 || i == 6 || j == 5 || j == 6)point+=5 ;
// 	
	// return point ; 
// 	
// }
// int main (){
	// ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // int t ; cin >> t ; 
    // while(t--){
    	// vector<vector<char>>mat(11 , vector<char>(11 , '.')) ; 
    	// for(int i = 1 ; i <= 10 ; i++){
    		// for(int j = 1 ; j <= 10 ;j++){
    			// char x ; cin >> x ; 
    			// mat[i][j] = x ; 
    		// }
    	// }
    	// int point = 0 ; 
    	// for(int i = 1 ; i <= 10 ; i++){
    		// for(int j = 1 ; j <=10 ; j++){
    			// if(mat[i][j] == 'X'){
    				// point+=returnPoint(i , j) ; 
    			// }
    		// }
    	// }
    	// cout << point << endl ; 
//     	
//     	
    // }
//     
// 	
	// return 0 ;
// }
// 