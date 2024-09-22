#include <bits/stdc++.h>
using namespace std;

class Hashing
{
    vector<list<int>> hashtable;
    int buckets;

public:
    Hashing(int size)
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
        int idx = hashvalue(key);
        list<int>::iterator it = searchKey(key);

        if (it != hashtable[idx].end())
        { // Key is present
            hashtable[idx].erase(it);
            cout << key << " is deleted" << endl;
        }
        else
        {
            cout << "Key is not present in the hashtable" << endl;
        }
    }
};

int main()
{
    Hashing h(10); // Correct instantiation without 'new'
    h.addKey(3);
    h.addKey(3);
    h.addKey(2);
    h.addKey(1);

    h.deleteKey(3); // Will output "Key is not present in the hashtable"
    h.deleteKey(3);
}
