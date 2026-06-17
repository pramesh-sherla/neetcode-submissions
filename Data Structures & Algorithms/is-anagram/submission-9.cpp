class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
        {
            return false;
        }
        vector <int> ct(26, 0);
        for (int i =0; i< s.length();i++)
        {
            ct[s[i]-'a']++;
            ct[t[i]-'a']--;
        }   
        for (int val:ct)
        {
            if(val!=0)
                return false;
        }   
        return true;
    }
};
