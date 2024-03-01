#二進位數字字串有一堆0跟1
#湊出最大的奇數(最右要一個1)
#解:仙鼠有幾個1,把一個放右邊其他放左邊，中間塞0
class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        N=len(s)
        one=0 #s裡面有幾個1
        for c in s:
            if c=='1':one+=1
        return '1'*(one-1)+'0'*(N-one)+'1'