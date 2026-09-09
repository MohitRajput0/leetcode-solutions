class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        int i=0,j=a.size()-1;
        while(i<j){
            if(a[i]+a[j]==t) return {i+1,j+1};
            if(a[i]+a[j]<t) i++;
            else j--;
        }
        return {};
    }
};