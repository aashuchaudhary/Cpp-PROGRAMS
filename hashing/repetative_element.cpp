#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<int>input(n);

    for(int i=0; i<n; i++){
        cin>>input[i];
    }

    // storing element and its frequency in map

    map<int,int>m; // ke and frequency both are of type int
    // calculte frequency of all the element in vector and insert into map, so for that we traverse the vector.

    for(int i = 0;i<n;i++){
        // storing frequency of evvery element in input arr
        m[input[i]]++;
    }
    int sum = 0;
    // finding sum of repetitive element. so we traverse again the map and check the frequency is more than 1
    // pair -> eleememnt, frequency
    for(auto pair:m){
        if(pair.second>1){  //means it is repetitive element, or gives frequency.
            sum+=pair.first; //gives element
        }
    }

    cout<<"Ans - "<<sum<<endl;

// Initially
// []
// m[1]++ then [1,1] get inserted into map
// m[1]++ then [1,2] get inserted into map
// m[7]++ then [7,1] get inserted into map
return 0;
}