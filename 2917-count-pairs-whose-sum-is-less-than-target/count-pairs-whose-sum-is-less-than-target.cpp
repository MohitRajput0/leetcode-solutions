class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size()-1;
        int count = 0;
       
        while(i<j)
        {
            if(nums[i]+nums[j]<target)
            {
                count = count + (j-i);
                i++;
            }
            else if(nums[i]+nums[j]>=target)
            {
                j--;
            }

        }

        // for(int i=0;i<nums.size()-1;i++)
        // {
        //     for(int j=i+1;j<=nums.size()-1;j++){
        //         if(nums[i]+nums[j]<target)
        //         {
        //             count++;
        //         }
        //     }
        // }
        return count;
    }
};