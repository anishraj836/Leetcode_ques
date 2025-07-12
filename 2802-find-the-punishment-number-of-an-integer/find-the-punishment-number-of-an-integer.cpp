bool solved = false;
vector<int> v(1000,0);
class Solution {
public:
bool func(int req, int i, string &s) {
    if(i==s.length()&&req==0) return true;
    int cur = 0;
    for(int k = i; k<s.length(); k++)
    {
        cur = cur*10+(s[k]-'0');
        if(cur>req) break;
        if(func(req-cur,k+1,s)) return true;
    }
    return false;
}
void solve(){
    for(int i = 1; i<=1000; i++)
    {
        string s = to_string(i*i);
        if(func(i, 0, s)) v[i-1] = i*i;
    }
}
    int punishmentNumber(int n) {
        if(!solved) solve();
        int ans = 0;
        for(int i = 1; i<=n; i++)
        {
            ans+=v[i-1];
        }
        return ans;
    }
};