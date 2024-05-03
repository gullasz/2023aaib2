class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        v1=list(map(int,version1.split('.')))#先把字串變陣列
        v2=list(map(int,version2.split('.')))
        #print(v1)
        N1,N2=len(v1),len(v2)#陣列長度
        for i in range(max(N1,N2)):
            if i<N1 and i<N2:#兩個都還沒超過範圍
                if v1[i]>v2[i]:return 1
                if v1[i]<v2[i]:return -1
            elif i<N1 and v1[i]>0:#如果左邊比較長 且有數字
                return 1
            elif i<N2 and v2[i]>0:#如果右邊比較長 且有數字
                return -1
        return 0