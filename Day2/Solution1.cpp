// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
int main() {
    // Write C++ code here
    int a[] = {1,2,3,4};
    int prod =1;
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++) {
        prod = prod * a[i];
    }
    int b[n];
    for(int i=0;i<n;i++) {
        b[i] = prod / a[i];
    }
     for(int i=0;i<n;i++) {
        b[i] = prod / a[i];
    }
    cout<<prod;
    return 0;
}
