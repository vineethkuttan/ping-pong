edges={}
mstedges={}
def find(parent,vno):
    return parent[vno]
def union(parent,c1,c2):
    for i in range(len(parent)):
        if parent[i]==c2:
            parent[i]=c1
n=int(input('Enter the no of vertices '))
structure=int(input('Enter 0 for Entering adjacency matrix or 1 for Entering edges'))
if structure:
    no=int(input('Enter the no of edges '))
    for i in range(no):
        a,b,c=int(input('Enter V1 ')),int(input('Enter V2 ')),int(input('Enter Weight'))
        edges[c]=(a,b)
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
                edges[g[i][j]]=(i,j)
mstv=0
parent=[]
for i in range(n):
    parent.append(i)
for i in sorted(edges.keys()):
    c1=find(parent,edges[i][0])
    c2=find(parent,edges[i][1])
    if c1 != c2:
        mstedges[i]=edges[i]
        mstv+=1
        union(parent,c1,c2)
print('No of vertices',mstv)
print('Total cost of edges in MST',sum(mstedges.keys()))
print('The edges are.....')
for i in sorted(mstedges.keys()):
    print(str(mstedges[i][0])+' -- '+str(mstedges[i][1])+' == '+str(i))
