//Edit Distance - LEETCODE 72
//T.C :O(n*m)
//S.C :O(n*m)

class Solution {
public:
    int minDistance(string str1, string str2) {
        int temp[str1.size()+1][str2.size()+1];
        
        for(int i=0; i < str2.size()+1 ; i++){
            temp[0][i] = i;
        }
        
        for(int i=0; i < str1.size()+1; i++){
            temp[i][0] = i;
        }
        
        for(int i=1;i <=str1.size(); i++){
            for(int j=1; j <= str2.size(); j++){
                if(str1[i-1] == str2[j-1]){
                    temp[i][j] = temp[i-1][j-1];
                }else{
                    temp[i][j] = 1 + min(temp[i-1][j-1], min(temp[i-1][j], temp[i][j-1]));
                }
            }
        }
        
        return temp[str1.size()][str2.size()];
    }
};
