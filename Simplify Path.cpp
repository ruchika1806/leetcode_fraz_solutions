class Solution {
public:
    string simplifyPath(string path) {
       int slash_count=0;
        vector<string> v;
        string temp="";
        for(int i=0;i<path.size();i++){
            if(path[i]=='/'){
                slash_count++;
            }
            if(path[i]!='/' and slash_count==1){
                temp+=path[i];
            }
            if((path[i]=='/' and slash_count==2) or i==path.size()-1){
                 v.push_back(temp);
                slash_count=1;
                temp="";
            }
        }
        stack<string> s;
        for(int i=0;i<v.size();i++){
            if(v[i]==".." and !s.empty()){
                s.pop();
            }
            else if(v[i]!="" and v[i]!="." and v[i]!=".."){
                s.push(v[i]);
            }
        }
        string res="";
        v.clear();
        while(!s.empty()){
            v.push_back(s.top());
            s.pop();
        }
        for(int i=v.size()-1;i>=0;i--){
           res+="/";
           res+=v[i];
        }
        if(res==""){
            return "/";
        }
        return res;
    }
    
};
