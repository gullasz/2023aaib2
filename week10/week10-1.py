N=int(input('�п�JN:'))
#�H�e��for�j�� �o���Ψ禡�I�s�禡
def func(n):
    if n==1:return 1#�פ���� ���ƾ��k�ǪkN=1����
    return n*func(n-1)#�禡�I�s�禡 ��j���D �令�h�ݤp���D
ans=func(N)
print(ans)
