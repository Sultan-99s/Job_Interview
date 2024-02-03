class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        vector<string> st;
        string temp = "";
        int i=0;

        while(i<s.size()){
            if(s[i] == ' '){
                st.push_back(temp);
                temp = "";
            }
            else
                temp+=s[i];
            
            i++;
        }

        st.push_back(temp);
        if(st.size() != pattern.size())
            return false;

        unordered_map<char, string> word;
        set<string> a;

        for(int i=0; i<pattern.size(); i++){
            if(word.find(pattern[i]) != word.end()){
                if(word[pattern[i]] != st[i])
                    return false;
            }
            else{
                if(a.count(st[i]) > 0)
                    return false;
                word[pattern[i]] = st[i];
                a.insert(st[i]);
            }
        }
        return true;
    }
};
