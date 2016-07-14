T = int(input(""))
 
i = 0
 
while(i < T):
    numStr = input("")
    N = len(numStr)
    print(int(numStr[0]) + int(numStr[N-1]))
    i = i + 1 
