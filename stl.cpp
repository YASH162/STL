// Online C++ compiler to run C++ program online

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    //pairs
    pair<int,string>p;
    //insert the value in piar
    p =make_pair(2,"abc");
    // insert the value in piar 
    p ={2,"abcd"};
    cout<<p.first<<" "<<p.second<<endl;
    
    //vector --> continous memory block{dynamic}
    vector<int>v;
    int x =2;
    v.push_back(x);
    cout<<v.size()<<endl; //size of the vector
    
    
 

    return 0;
}