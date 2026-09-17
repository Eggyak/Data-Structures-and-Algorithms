class Solution {
public:
    string toGoatLatin(string sentence) {
        std::stringstream ss(sentence);
        std::string temp_word;
        std::vector<std::string> words;

    // Store all words into the vector
        while (ss >> temp_word) {
            words.push_back(temp_word);
        }
        string sen ;
        vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        for (int i = 0 ; i < words.size();i++ ){
            string temp = words[i];
            if (find(vowels.begin(), vowels.end(), temp[0]) != vowels.end()){
                if (i ==words.size()-1){
                    temp+="ma"+ string(i+1, 'a');
                    sen+=temp;
                }
                else{
                    temp+="ma"+ string(i+1, 'a')+ " ";
                    sen+=temp;}
            }
            else{
                char temp1= temp[0];
                temp.erase(0, 1);
                if (i ==words.size()-1){
                    temp += temp1 + string("ma") + string(i + 1, 'a');
                    sen+=temp;
                }
                else{
                    temp += temp1 + string("ma") + string(i + 1, 'a')+" ";
                    sen+=temp;
                }
                
            }         
      

            
        } 
        return sen;
    }
       
};