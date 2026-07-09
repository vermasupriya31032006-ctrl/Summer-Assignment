class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int maxLength = 0;

        for(int i = 0; i < s.length(); i++) {

            vector<bool> visited(256, false);
            int count = 0;

            for(int j = i; j < s.length(); j++) {

                if(visited[s[j]])
                    break;

                visited[s[j]] = true;
                count++;
            }

            maxLength = max(maxLength, count);
        }

        return maxLength;
    }
};
