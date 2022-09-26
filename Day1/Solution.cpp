// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
int main() {
    // Write C++ code here
    int a[] = {10,15,3,7};
    int sum = 18, flag=0;
    int n = sizeof(a) / sizeof(a[0]);

    sort(a,a+n);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    int high = a.size() -1;
    int low= 0;
    while(low<=high) {
        int value= a[low] + a[high];
        if(value == sum) {
            flag=1;
            cout<<"sum is present";break;
        } else if(value<=sum) {
            low++;
        } else high--;
    }
    
    if(flag ==0) {
        cout<<"no such sum";
    }
    return 0;
}
