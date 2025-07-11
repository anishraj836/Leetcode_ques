class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int l = 0;
        int r = s.length()-1;
        while(l<r)
        {
            if(s[l]!=s[r])
            {
                s[l] = s[r] = min(s[l],s[r]);
            }
            l++;
            r--;
        }
        return s;
    }
};