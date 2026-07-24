class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word;
        stringstream ss(s);

        while (ss >> word)
            words.push_back(word);

        if (pattern.size() != words.size())
            return false;

        unordered_map<char, int> charMap;
        unordered_map<string, int> wordMap;

        for (int i = 0; i < pattern.size(); i++) {
            if (charMap[pattern[i]] != wordMap[words[i]])
                return false;

            charMap[pattern[i]] = i + 1;
            wordMap[words[i]] = i + 1;
        }

        return true;
    }
};