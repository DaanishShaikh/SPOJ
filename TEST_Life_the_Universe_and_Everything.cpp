#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(100,0);
    for(int i=0 ; ; i++){
        cin>>v[i];
        
        if(v[i]==42){
            break;
        }
        cout<<v[i]<<endl;
    }

return 0;
}