
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if (s.length() < p.length())
            return ans;

        vector<int> countP(26, 0);
        vector<int> countS(26, 0);

        for (int i = 0; i < p.length(); i++) {
            countP[p[i] - 'a']++;
            countS[s[i] - 'a']++;
        }

        if (countP == countS)
            ans.push_back(0);

        for (int i = p.length(); i < s.length(); i++) {

            countS[s[i] - 'a']++;
            countS[s[i - p.length()] - 'a']--;

            if (countP == countS)
                ans.push_back(i - p.length() + 1);
        }

        return ans;
    }
};
