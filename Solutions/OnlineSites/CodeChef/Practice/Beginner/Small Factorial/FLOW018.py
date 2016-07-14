def Fact(n):
    fac = 1
    for i in range(1,n+1):
        fac = fac * i
    return fac
 
t = int(input(""))
 
i = 0
 
while(i < t):
    n = int(input(""))
    print(Fact(n))
    i = i + 1 
