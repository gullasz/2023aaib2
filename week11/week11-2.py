#用篩子法
BOUND=300000
ans=0
table=[True]*BOUND
for i in range(2,BOUND):
    if table[i]==True:
        #print(i,end=' ')
        ans+=1
        for k in range(i*i,BOUND,i):
            table[k]=False
print('質數有',ans,'個')