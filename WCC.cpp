#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int x;
	    cin>>x;
	    char s[14];
	    cin>>s;
	    int cC,cN,cD;
	    cC=cN=cD=0;
	    
	    for(int i=0;i<14;i++){
	        if(s[i]=='C'){
	            cC++;        
	        }
	        else if(s[i]=='N'){
	            cN++;
	        }
	        else{
	            cD++;
	        }
	    }
	    
	    cC = 2 * cC + cD;
	    cN = 2 * cN + cD;
	    
	    if(cC > cN){
	        cout<<x*60<<endl;
	    }
	    else if(cN > cC){
	        cout<<x*40<<endl;
	    }
	    else{
	        cout<<x*55<<endl;
	    }
	}
	return 0;
}
