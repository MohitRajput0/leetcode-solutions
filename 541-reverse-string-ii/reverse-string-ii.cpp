class Solution {
public:
void rev(string& s,int l, int r) {
    while(l<r) {
        swap(s[l],s[r]);
        l++;
        r--;
    }
}
    string reverseStr(string s, int k) {
        int l=0;
        while(l<s.size()) {
            if((l+k)<=s.size()-1 && ((l+2*k)<=s.size()-1)) {
                rev(s,l,l+k-1);
                l+=2*k;
            }
            else if(l+k<=s.size()-1 && l+2*k>s.size()-1) {
                rev(s,l,l+k-1);
                return s;
            }
            else if(l+k>s.size()-1){
                rev(s,l,s.size()-1);
                return s;
            }
        }
        return s;
    }
};