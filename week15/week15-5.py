class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        #先寫簡單的一半
        ans=0
        N=len(s)
        j=0 #尾巴j
        for i in range(N):#字串迴圈 頭是i
            maxCost-=abs(ord(s[i])-ord(t[i]))#毛毛蟲的頭i吃葉子
            while maxCost<0: #預算不夠，變負的
                maxCost+=abs(ord(s[j])-ord(t[j]))#尾巴j大便出來
                j+=1#尾巴j往右縮
            ans=max(ans,i-j+1)


        return ans
