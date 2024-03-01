class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int N=s.length();//字串長度
        int one=0;
        for(int i=0;i<N;i++)//for 迴圈
        {
            if(s[i]=='1') one++; //if判斷
        }
        string ans;
        for (int i=0;i<one-1;i++) ans+='1';
        for (int i=0;i<N-one;i++) ans+='0';
        ans+='1';
        //printf("N:%d one:%d",N,one);//印出有幾個1
        return ans;
    }
};
