#include <iostream>
using namespace std;

int findSingle(int nums[],int n){
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(nums[i]==nums[j]){
                count++;
            }
        }
        if(count == 1) return nums[i];
    }
    return -1;
}

int main(){
    int nums[1000];
    int n = 0;
    while(cin >> nums[n]){
        n++;
    }

    cout << findSingle(nums , n);
    return 0;
}