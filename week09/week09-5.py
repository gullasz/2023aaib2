class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        M,N=len(grid),len(grid[0])#�����DM,N���h�j
        def travel(i,j):#�|���W�U���k�Ȧ� �P�ɻ\�� ��쪺�a�賣���L
            if i<0 or  j<0 or i>=M or j>=N:return#�W�L��l�d��A���}
            if grid[i][j]=='0':return#���ਫ����l
            grid[i][j]='0'#���L�F���i�A��
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
