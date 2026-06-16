class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str;
        int i=0;
        int j=0;
        while(i<word1.size() && j<word2.size()){
            str += word1[i];
            i++;

            str += word2[j];
            j++;

        }

        while(i<word1.size()){
            str += word1[i++];
        }
        while(j<word2.size()){
            str += word2[j++];
        }
        return str;
        
    }
};