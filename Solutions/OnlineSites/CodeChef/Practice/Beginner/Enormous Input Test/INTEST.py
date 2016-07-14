inputStr = input("").split(" ")
 
n = int(inputStr[0])
k = int(inputStr[1])
 
i = 0
 
count = 0
 
while(i < n):
    num = int(input(""))
    if(num % k == 0):
        count = count + 1
    i = i + 1
 
print(count) 
