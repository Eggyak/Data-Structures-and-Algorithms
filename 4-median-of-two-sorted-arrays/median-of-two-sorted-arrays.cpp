#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std; 

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {        
        vector<int> merged(nums1.size() + nums2.size());      
        std::merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin());        
        int size = merged.size();      
        if (size % 2 != 0) {
            
            return merged[size / 2];
        } else {
            
            double left = merged[(size / 2) - 1];
            double right = merged[size / 2];
            return (left + right) / 2.0;
        }
    }
};
