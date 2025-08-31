#include<bits/stdc++.h>
using namespace std;

int times_array_rotated(vector<int> nums){
    int n=nums.size();
    int low = 0, high = n-1;
    int index = -1;
    int ans = INT_MAX;

    while(low<=high){
        int mid = (low+high)/2;

        // Case 1: subarray already sorted
        if(nums[low]<=nums[high]){
            if(nums[low]<ans){
                index = low;
                ans = nums[low];
            }
            break;  // ✅ added break here
        }

        // Case 2: left half sorted
        if(nums[mid] >= nums[low]){   // ✅ fixed condition
            if(nums[low]<ans){
                ans = nums[low];
                index = low;
            }
            low = mid+1;  // ✅ move right
        }
        else{  // right half sorted
            high = mid-1;
            if(nums[mid]<ans){
                index = mid;
                ans = nums[mid];
            }
        }
    }
    return index;
}

int main(){
    vector<int> nums = {6,5,1,2,3,4};
    int ans = times_array_rotated(nums);
    cout<<ans;
    return 0;
}
