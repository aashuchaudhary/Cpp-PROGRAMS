#include<bits/stdc++.h>
using namespace std;
 int main(){
    multimap<string,int>directory;
    // Inserting record indirectory
    directory.insert(make_pair("urvi",731454));
    directory.insert(make_pair("ashu",988796));
    directory.insert(make_pair("munna",657632));
    directory.insert(make_pair("ashu",721313));
    // in multimap square bracket is not allowed
    // directory["urvi"]=325343;

    for(auto pair:directory){
        cout<<"Name - "<<pair.first<<" : "<<"Phone no. - " <<pair.second<<endl;
    }
cout<<directory.count("ashu")<<endl;   
 }