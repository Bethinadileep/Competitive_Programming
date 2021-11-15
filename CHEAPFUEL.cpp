//codeby : Dileep
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,a,b,k;
	    cin>>x>>y>>a>>b>>k;
	    int petrol_check = x + k*a;
	    int diesel_check = y + k*b;
	    if(petrol_check > diesel_check){
	        cout<<"DIESEL"<<endl;
	    }
	    else if(diesel_check > petrol_check){
	        cout<<"PETROL"<<endl;
	    }
	    else{
	        cout<<"SAME PRICE"<<endl;
	    }
	}
	return 0;
}
