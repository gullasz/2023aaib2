class Solution:
    def countSubarrays(self, nums: List[int], k: int) -> int:
        ans=0
        tail=0
        M=max(nums)
        MN=0#最大值出現次數
        for head in range(len(nums)):#以頭為準往右
            if nums[head]==M: MN+=1#找最大值
            #目標:希望MN>=k合法
            while MN>=k:
                if nums[tail]==M:MN-=1
                tail+=1
            ans+=tail
        return ans
