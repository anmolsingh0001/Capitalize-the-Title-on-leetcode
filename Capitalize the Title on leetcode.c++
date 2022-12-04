class Solution {
public:
    string capitalizeTitle(string s) {

        int x=0;
        int c=0;
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
            if(s[i]==' '){
                if(c>2)
                {
                    s[x]=toupper(s[x]);
                }
                c=0;
                x=i+1;
            }else{
                c++;//taking count of word
            }
            
        }
        if(c>2)
                {
                    s[x]=toupper(s[x]);
                }
        return s;
    }
};