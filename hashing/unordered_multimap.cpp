#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_multimap<string,int>fruitcount;
    fruitcount.insert(make_pair("apple",5));
    fruitcount.insert(make_pair("banana",3));
    fruitcount.insert(make_pair("apple",7));  

    for(auto pair:fruitcount){
        cout<<"Fruit - "<<pair.first<<" : "<<"Count - "<<pair.second<<endl;
    }  

}