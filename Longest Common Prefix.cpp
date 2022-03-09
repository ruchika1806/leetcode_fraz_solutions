class Solution {
public:
    string commonPrefixUtil(string str1, string str2)
{
    string result;
    int n1 = str1.length(), n2 = str2.length();
 
    // Compare str1 and str2
    for (int i=0, j=0; i<=n1-1&&j<=n2-1; i++,j++)
    {
        if (str1[i] != str2[j])
            break;
        result.push_back(str1[i]);
    }
 
    return (result);
}
    
    
    string longestCommonPrefix(vector<string>& arr) {
        string prefix =  arr[0];        
        int n=arr.size();
    for (int i=1; i<=n-1; i++)
        prefix = commonPrefixUtil(prefix, arr[i]);
 
    return (prefix);
    }
};
