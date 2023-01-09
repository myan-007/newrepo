#include <iostream>

using namespace std;

int main() {
	long long t;
	cin >> t;
	while(t--){
        int n;
	    cin >> n;
	    int ar[n];
	    vector <long> even;
        vector <long> odd;
	   
	    
	    for(int i=0;i<n;i++){
	        cin >> ar[i]; 
	        if(ar[i]%2==0){
                even.push_back(ar[i]);
	        }
	        else
	        odd.push_back(ar[i]);
	    }
	    
	    for(int i=0;i<even.size();i++){
	    cout << even[i]<<" ";
	    for(int i=0;i<even.size();i++){
	    cout << odd[i]<<" "; 
        cout << "\n";   
	    }
	    
	    
	}
	return 0;
}
