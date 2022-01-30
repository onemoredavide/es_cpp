def sol(a,b,c,d):
    la=[a]
    lb=[b]
    lc=[c]
    ld=[d]
    le=[]
    if a>b:
       le.append(a)
    else:
        le.append(b)
    lb, lc = lc, lb 
    lc, ld = ld, lc

    la, le=le,la
    la,lc=lc,la

    print(la, lb, lc, ld, le)

sol(7,8,9,10)