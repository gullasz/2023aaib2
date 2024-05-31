class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        table={}
        ans=[]
        for num in nums:
            if num in table:
                table[num]+=1
            else:
                table[num]=1
        for num in table:
            if table[num]==1:
                ans.append(num)
        return ans
