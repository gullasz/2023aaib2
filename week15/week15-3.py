class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        #���g²�檺�@�b
        ans=0
        N=len(s)
        j=0 #����j
        for i in range(N):#�r��j�� �Y�Oi
            maxCost-=abs(ord(s[i])-ord(t[i]))#����Ϊ��Yi�Y���l
            while maxCost<0: #�w�⤣���A�ܭt��
                maxCost+=abs(ord(s[j])-ord(t[j]))#����j�j�K�X��
                j+=1#����j���k�Y
            ans=max(ans,i-j+1)


        return ans
