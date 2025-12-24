#include <iostream>
#include <vector>
using namespace std;

void sortNum(int nums[], int n){
    int count0 = 0, count1=0, count2 = 0;

    for(int i=0;i<n;i++){
        if(nums[i]==0) count0++;
        else if(nums[i]==1) count1++;
        else count2++;
    }

    int index = 0;
    while (count0--) nums[index++] = 0;
    while (count1--) nums[index++] = 1;
    while (count2--) nums[index++] = 2;
}

int main(){
    int nums[1000];
    int n = 0;
    while(cin >> nums[n]){
        n++;
    }
    
    sortNum(nums,n);

    for(int i=0;i<n;i++){
        cout << nums[i]<<" ";
    }

    return 0;
}