class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string> words;
        stringstream ss(sentence);
        string word;

        while(ss >> word) {
            words.push_back(word);
        }

        for(int i = 0; i < words.size(); i++) {
            if(words[i].back() != words[(i + 1) % words.size()][0])
                return false;
        }

        return true;
    }
};