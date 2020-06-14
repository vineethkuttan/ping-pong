for _ in range(int(input())):
    lx,ly=[],[]
    for i in range(int(input())):
        j,k=map(int,input().split())
        lx.append(j)
        ly.append(k)
    j=abs(min(lx)-max(lx))
    k=abs(min(ly)-max(ly))
    print(max(j,k)**2)
