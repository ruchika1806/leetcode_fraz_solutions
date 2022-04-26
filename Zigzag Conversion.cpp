class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        if(numRows==1){
            return s;
        }
        int increment=2*(numRows-1);
        string res="";
        for(int r=0;r<numRows;r++){
            for(int i=r;i<n;i+=increment){
                res+=s[i];
                if(r>0 and r<numRows-1 and i+increment-2*r<n){
                    res+=s[i+increment-2*r];
                }
            }
        }
        return res;
    }
};
