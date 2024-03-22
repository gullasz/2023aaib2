# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        a=[]#a設成陣列list
        while head !=None:
            a.append(head.val)
            head=head.next
        #print(a)
        N=len(a)#a多長
        for i in range(N):#i就跑多少
            if a[i]!=a[N-i-1]:return False#頭尾不同
        return True