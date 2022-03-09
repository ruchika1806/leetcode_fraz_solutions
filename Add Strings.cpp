class Solution {
public:
    string addStrings(string num1, string num2) {
        int size1=num1.size();
        int size2=num2.size();
        if(size2<size1){
            swap(size2,size1);
            string temp="";
            temp=num1;
            num1=num2;
            num2=temp;
        }
        
        string new1="";
        int diff=size2-size1;
        while(diff--){
            new1+='0';
        }
        new1+=num1;
        num1=new1;
        int carry=0;
        int i=size2-1;
        
        string sum="";
        
        i=size2-1;
        while(i>=0){
            
            int x=(int(num1[i])+int(num2[i])-96+carry);
           
            sum+=char((x%10)+48);
            
            carry=x/10;
            i--;
        }
        if(carry!=0){
            sum+=char(carry+48);
        }
        reverse(sum.begin(),sum.end());
        return sum;
    }
};
