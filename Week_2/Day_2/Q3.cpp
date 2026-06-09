class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        if (p.size() > s.size()) return ans;

        vector<int> c1(26, 0);
        vector<int> c2(26, 0);

        for (char ch : p) {
            c1[ch - 'a']++;
        }

        int n = p.size();

        for (int i = 0; i < n; i++) {
            c2[s[i] - 'a']++;
        }

        if (c1 == c2) ans.push_back(0);

        for (int i =n; i < s.size(); i++) {
            c2[s[i] - 'a']++;
            c2[s[i - n] - 'a']--;

            if (c1 == c2) {
                ans.push_back(i - n + 1);
            }
        }

        return ans;
    }
};