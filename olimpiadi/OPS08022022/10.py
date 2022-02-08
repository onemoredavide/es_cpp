parole="sole cuore amore"
l=len(parole)
a = 1
b = 1
for i in range(len(parole)):
    if parole[i]=="":
        if a==1:
            a=i
        else:
            b=i
p1=parole[0:a-1]
p2=parole[a+1:b-1]
p3=parole[b+1:l]

print(p1)
print(p2)
print(p3)
print(a)
print(b)
print(l)
