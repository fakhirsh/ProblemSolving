     
T = int(input(""))
 
i = 0
 
numList = []
 
while(i < T):
    num = int(input(""))
    numList.append(num)
    i = i + 1
 
numList.sort()
 
for x in numList:
    print(x) 
