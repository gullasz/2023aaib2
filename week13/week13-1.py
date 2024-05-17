#資料結構的介紹
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val 值
#         self.left = left 左邊的小孩
#         self.right = right 右邊的小孩
class Solution:
    def removeLeafNodes(self, root: Optional[TreeNode], target: int) -> Optional[TreeNode]:
        if root==None:return root #沒東西直接結束
        left=self.removeLeafNodes(root.left,target)#先用同個函式處理左半邊
        right=self.removeLeafNodes(root.right,target)#再用同個函式處理左半邊
        if left==None and right==None and root.val==target:
            return None
        root.left=left
        root.right=right
        return root