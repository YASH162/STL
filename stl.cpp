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

    return 0;
}
