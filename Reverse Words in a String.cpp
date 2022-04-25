class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string temp="";
        int space=0;
        for(int i=0;i<s.size();i++)
        {
          
            if(s[i]==' ' and temp!="")
            {   // cout<<temp<<endl;            
                v.push_back(temp);
                temp="";
            }
            else{
                //cout<<s[i]<<endl;
                if(s[i]!=' '){
                    temp.push_back(s[i]);
                }
            
            }
        }
        
        
        if(temp!="")
        {
            v.push_back(temp);
            temp="";
        }
        /*for(int i=0;i<v.size();i++){
            cout<<v[i]<<",";
        }*/
        string res="";
        reverse(v.begin(),v.end());
        for(auto it=v.begin();it!=v.end();it++)
        {
            res+=*it;
            res.push_back(' ');
        }
        
        res.pop_back();
        
       return res;
    }
};
