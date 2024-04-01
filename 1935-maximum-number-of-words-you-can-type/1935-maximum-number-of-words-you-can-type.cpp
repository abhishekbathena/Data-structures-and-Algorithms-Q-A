class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
    istringstream iss(text);
    vector<string> words;
    string word;
    
    while (iss >> word) {
        bool b=true;
        
        for(auto a:brokenLetters)
        {
            if(word.find(a)!=string::npos)
            {
                b=false;
                break;
            }
        }
        if(b) words.push_back(word);
    }
        
        return words.size();
        
    
    }
};