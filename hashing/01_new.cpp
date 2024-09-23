// Seperate chaining to handel collision
#include <bits/stdc++.h>
using namespace std;

class Hashing
{
    vector<list<int>> hashtable;
    int buckets;

public:
    Hashing(int size) //constructor
    {
        buckets = size;
        hashtable.resize(size);
    }

    // Function to return the hash value of a given key
    int hashvalue(int key)
    {
        return key % buckets; // division method
    }

    // Function to add elements
    void addKey(int key)
    {
        int idx = hashvalue(key);
        hashtable[idx].push_back(key);
    }

    // Function to search for a particular key
    list<int>::iterator searchKey(int key)
    {
        int idx = hashvalue(key);
        return find(hashtable[idx].begin(), hashtable[idx].end(), key);
    }

    // Function to delete a particular key
    void deleteKey(int key)
    {
        // Check if value is present or not
        int idx = hashvalue(key);
        if(searchKey(key)!=hashtable[idx].end()){ //key is present

        hashtable[idx].erase(searchKey(key));
        cout<< key <<" "<<"is deleted"<<endl;
        }
        else
        {
            cout << "Key is not present in the hashtable" << endl;
        }
    }
};

int main()
{
    // Object Hashing
    Hashing h(10); // Correct instantiation without 'new'
    h.addKey(3);
    h.addKey(9);
    h.addKey(2);
    h.addKey(1);

    h.deleteKey(3); // Will output "Key is not present in the hashtable"
    h.deleteKey(3);
}
