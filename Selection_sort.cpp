// Selection sort implementation

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{2,3-3,3,7,8,1,-12,57,8,22, 654};
    int N = v.size();
    
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;
    
    for(int i=0; i<N-1; i++){
        
        int ind = i;
        for(int j=i+1; j<N; j++){
            if(v[j] < v[ind]){
                ind = j;
            }
        }
        swap(v[i], v[ind]);
    }
    
    for(auto x:v)
        cout<<x<<" ";

    return 0;
}
