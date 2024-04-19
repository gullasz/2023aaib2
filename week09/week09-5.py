class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        M,N=len(grid),len(grid[0])#先知道M,N有多大
        def travel(i,j):#會往上下左右旅行 同時蓋朝 能到的地方都走過
            if i<0 or  j<0 or i>=M or j>=N:return#超過格子範圍，離開
            if grid[i][j]=='0':return#不能走的格子
            grid[i][j]='0'#走過了不可再走
            travel(i+1,j)
            travel(i-1,j)
            travel(i,j+1)
            travel(i,j-1)
        ans=0
        for i in range(M):
            for j in range(N):
                if grid[i][j]=='1':
                    ans+=1
                    travel(i,j)
        return ans
