// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Demonstrating the use of pairs in C++
    pair<int, string> p;
    
    // Inserting values into the pair using make_pair
    p = make_pair(2, "abc");
    cout << "Pair (make_pair): " << p.first << " " << p.second << endl;
    
    // Directly assigning values to the pair
    p = {2, "abcd"};
    cout << "Pair (direct assignment): " << p.first << " " << p.second << endl;
    
    // Demonstrating the use of vectors in C++
    vector<int> v;
    int x = 2;
    
    // Pushing an element into the vector
    v.push_back(x);
    cout << "Vector size after push_back: " << v.size() << endl; // size of the vector
    
    // Removing the last element from the vector using pop_back
    v.pop_back();
    cout << "Vector size after pop_back: " << v.size() << endl;
    
    // Creating a vector of pairs
    vector<pair<int, int>> vec_of_pairs;
    
    // Inserting pairs into the vector
    vec_of_pairs.push_back(make_pair(2, 4));
    vec_of_pairs.push_back({3, 4});  // Direct insertion of pair
    
    // Iterating through the vector of pairs and printing elements
    cout << "Vector of pairs:" << endl;
    for (int i = 0; i < vec_of_pairs.size(); i++) {
        cout << vec_of_pairs[i].first << " " << vec_of_pairs[i].second << endl;
    }
    
    // Demonstrating the use of iterators in C++
    vector<int> v2{1, 2, 3, 4, 5, 6, 3, 45, 21};
    
    // Using iterators to traverse the vector
    cout << "Vector elements using iterators:" << endl;
    for (auto it = v2.begin(); it != v2.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "We are going to make the map, store the value, and print the value\n";
    
    map<int, int> m;   // by using map the key wil alway be stored in the sorted way 
    m.insert({2, 4});
    m.insert({1, 5});

    for (auto value : m) {
        cout << "Key: " << value.first << ", Value: " << value.second << endl;
    }
    
     
    cout << "We are going to make the unordered_map, store the value, and print the value\n";
    
    unordered_map<int,int>umap;
    int key,value;
      while (true) {
        // Ask user for input
        cout << "Enter a key (enter -1 to stop): ";
        cin >> key;

        // Condition to break the loop
        if (key == -1) {
            break;
        }

        cout << "Enter a value: ";
        cin >> value;

        // Insert the user input into the unordered_map
        umap.insert({key, value});
    }
    for(auto value : umap){
      cout<<"Key: "<<value.first<<" Value: "<<value.second<<endl;
    }
    
    

    
    


    return 0;
}
