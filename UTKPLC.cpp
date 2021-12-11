//codeby : Dileep

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string first,second,third;
    string x,y;
    while(t--){
        cin>>first>>second>>third;
        cin>>x>>y;
        if(first==x or first==y) {
            cout<<first<<endl;
        }   
        else if(second==x or second==y) {
            cout<<second<<endl;
        } 
        else {
            cout<<third<<endl;
        }

    } 

    return 0;
}
