class Solution {
public:
    string smallestPalindrome(string s) {
        string first = s.substr(0, s.size() / 2);
        sort(first.begin(), first.end());

        string second = first;
        reverse(second.begin(), second.end());

        if (s.size() % 2 == 0)
            return first + second;
        else
            return first + s[s.size() / 2] + second;
    }
};