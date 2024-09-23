#include<bits/stdc++.h>
using namespace std;
int main(){
// map<string,int>directory;  //For ascending order alphabetically
map<string,int,greater<string>>directory; //For descending order alphabetically


directory["home"]=10500;
directory["workdir"]=20404;
directory["Ashton"]=87908;
// Here wecan update thevale but we can inset duplicate value of key

// directory["Ashton"]=98908;


// Printing  the directory
for(auto element:directory){
    cout<<"Name -> "<<element.first<<endl; //key
    cout<<"Phone number -> "<<element.second<<endl; //value
}
    cout<<endl;
// Another Way to insert the directory  using insert KEYWORD,it will insert if it not present ,or if its already present then it will donothing.
// T.C =O(long(n))
directory.insert(make_pair("Ashton",2345));


}