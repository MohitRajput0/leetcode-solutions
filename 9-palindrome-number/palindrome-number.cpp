class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return 0;

        string org = to_string(x);
        string rev = org;

        reverse(rev.begin(), rev.end());

        return org == rev;
    }
};