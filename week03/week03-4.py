class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        T=[0]*101#數字1~100，陣列要開101個
        best=0#最多的數字出現次數
        for num in nums:#針對每個數字處理
            T[num]+=1#數字num出現次數+1
            if T[num]>best:best=T[num]
            #T有全部數字出現次數,best是最多次數
            #全部結果加起來
        total=0
        for t in T:
            if t== best:total+=t
        return total
        
