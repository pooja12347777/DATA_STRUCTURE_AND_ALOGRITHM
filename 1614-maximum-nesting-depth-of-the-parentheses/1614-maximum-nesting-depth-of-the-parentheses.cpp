class Solution {
public:
    int maxDepth(string s) {
        int count1 =0;
        int count2 =0;
        for(int i =0;i<s.size();i++){
            if(s[i]=='('){
                count1++;
                count2 = max(count2, count1);

            }else if(s[i]==')'){
                count1--;
            }
        }
       return count2;
        
    }
};