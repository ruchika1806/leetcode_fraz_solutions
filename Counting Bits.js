/**
 * @param {number} n
 * @return {number[]}
 * Counting Bits -Leetcode 338
 * T.C = O(N)
 * S.C =O(1)
 */
var countBits = function(n) {
    let ans = new Array(n+1);
    ans[0]=0;
    let c=0,power=1;
        for(let i=1;i<=n;i++){          
            ans[i]=ans[i-power]+1;
            c++;
            if(c==power){
                c=0;
                power=i+1;
            }
        }
        return ans;
};