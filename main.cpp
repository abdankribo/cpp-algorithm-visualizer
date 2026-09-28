#include <algorithm>
#include <iostream>
#include <vector>
#include <random>
#include <chrono>
using namespace std;
int main(){int n=20;vector<int>a(n);mt19937 g(42);for(auto&x:a)x=g()%90+10;cout<<"Before: ";for(int x:a)cout<<x<<" ";cout<<"\n";for(int i=0;i<n;i++){for(int j=0;j<n-i-1;j++){if(a[j]>a[j+1])swap(a[j],a[j+1]);cout<<"step "<<j+1<<": ";for(int x:a)cout<<x<<" ";cout<<"\n";}}cout<<"Sorted. Complexity O(n^2).\n";}
