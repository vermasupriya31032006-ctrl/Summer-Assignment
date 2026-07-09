class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        vector<bool> used(magazine.size(), false);

        for(char c : ransomNote) {

            bool found = false;

            for(int i = 0; i < magazine.size(); i++) {

                if(!used[i] && magazine[i] == c) {
                    used[i] = true;
                    found = true;
                    break;
                }
            }

            if(!found)
                return false;
        }

        return true;
    }
};
