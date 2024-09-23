#include<bits/stdc++.h>
using namespace std;
int  main(){
unordered_map<int,string>record;
// roll no, name
record.insert(make_pair(3, "ashu"));
record[1]="Bali";
record[2]="munna";
// duplicate record
// record[3]="kankhajura";  //it will update the record but insert check if its already present then it doesn't update  , or if it not present then its update update

// To Check What are the elememts in the map
for(auto pair:record){
    cout<<"Roll no. - "<< pair.first<<" : "<<"Name - " <<pair.second<<endl;
}
}