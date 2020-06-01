def longestpath(g,s,c):
    li=[]
    for i in g[s]:
        if i in g.keys():
            li.append(longestpath(g,i,c+1))
    if len(li)>0:
        return max(li)
    return c
#g={1:[2,3],2:[4,5],3:[6],4:[7]}
gi={}
li=[]
n=int(input('Enter the no of vertices '))
structure=int(input('Enter 0 for Entering adjacency matrix or 1 for Entering edges'))
if structure:
    no=int(input('Enter the no of edges '))
    for i in range(no):
        a,b=int(input('Enter V1 ')),int(input('Enter V2 '))
        if a in gi.keys:
            gi[a].append(b)
        else:
            gi[a]=[b]
else:
    g=[0 for i in range(n)]
    g=[g[:] for i in range(n)]
    for i in range(n):
        print('Enter the data for {} row'.format(i+1))
        for j in range(n):
            g[i][j]=int(input())
    for i in range(1,n):
        for j in range(0,i):
            if g[i][j]!=0:
                if i in gi.keys():
                    gi[i].append(j)
                else:
                    gi[i]=[j]
#print(gi)           
for i in gi.keys():
    li.append(longestpath(gi,i,1))
#print(li)
print(max(li))
