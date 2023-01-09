#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
	cin >> t;
	while(t--){
        long long int n,m;
	    cin >> n;
        cin >> m;
	    long long int a[n];
	    for(long long int i=0;i<n;i++){
	        cin >> a[i];
        }
	    long long int b[m];
		for(long long int i=0;i<m;i++){
            cin >> b[i];    
		}
        long long int map1[n];
	    long long int lastpos=-1;	
		for(long long int i=0;i<n;i++){
			if(a[i]==1) {
				map1[i]=0;
				lastpos=i;
			}
		    else if(lastpos==-1)
			{
        		map1[i]=-1;
			}
			else map1[i]=i-lastpos;
		}
        lastpos=-1;
        for(long long int i=n-1;i>=0;i--){
			if(a[i]==2) {
				map1[i]=0;
				lastpos=i;
			}
			else if(lastpos==-1)
			{
				continue;	
			}
			else if (map1[i]>lastpos-i || map1[i]==-1)
            {
                map1[i]=lastpos-i;
            }
            
            		
		}
		
		for(long long int i=0;i<m;i++){
            
		    cout << map1[b[i]-1] << " ";
		    
		}
		cout << "\n";
	}
	
	return 0;
}
