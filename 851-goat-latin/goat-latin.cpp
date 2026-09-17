class Solution {
public:
    string toGoatLatin(string sentence) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        stringstream ss(sentence);
        string word;
        string result = "";
        int word_count = 1;

        while (ss >> word) {
            char first_letter = word[0];
            
            if (vowels.count(first_letter)) {
                word += "ma";
            } else {
                word = word.substr(1) + first_letter + "ma";
            }
            
            word += string(word_count, 'a');
            
            if (result.empty()) {
                result += word;
            } else {
                result += " " + word;
            }
            
            word_count++;
        }
        
        return result;
    }
};