class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> reverse;
        int i = s.size();
        for (int j = i-1; j >= 0; j-- ) {
            reverse.push_back(s[j]);
        }
        s = reverse;
    }
};
