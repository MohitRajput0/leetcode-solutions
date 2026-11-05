class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> merge(n + m);
        copy(nums1.begin(), nums1.end(), merge.begin());
        copy(nums2.begin(), nums2.end(), merge.begin() + n);
        sort(merge.begin(), merge.end());
        double ans = (n + m) & 1 ? merge[(n + m) / 2] :
        (merge[(n + m) / 2] + merge[(n + m) / 2 - 1]) / 2.0;
        return ans;
    }
};