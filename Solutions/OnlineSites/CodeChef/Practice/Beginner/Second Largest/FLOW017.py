T = int(input(""))
 
i = 0
 
while(i < T):
    s = input("").split(" ")
    
    a = [int(s[0]), int(s[1]), int(s[2])]
 
    a.sort()
    
    print(a[1])
 
    i = i + 1
