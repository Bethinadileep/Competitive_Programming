//codeby : Dileep
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x>0 && (x+2*y)%2==0){
	        cout<<"YES"<<endl;
	    }
	    else if((x+2*y)%4==0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
