class Solution {
public:
    int compress(vector<char>& chars) {
        string s = "";
        int n = chars.size();
        if(chars.size() == 1){
            return 1;
        }
        for(int i = 0; i < n; ++i){
            int count = 1;
            while(i < n - 1 && chars[i] == chars[i + 1]){
                ++count;
                ++i;
            }
            s+=chars[i];
            if(count > 1){
              s+=to_string(count);
            }
        }
        // cout << s << endl;
        for(int i = 0; i < s.size(); ++i){
        chars[i] = s[i];
        }
        if(s.length() > n){
            return n;
        }
   
        return s.length();
        
    }
};