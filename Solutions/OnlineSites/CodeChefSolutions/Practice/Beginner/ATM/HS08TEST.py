num = input("").split(" ")
withdraw = int(num[0])
balance = float(num[1])
 
if (withdraw % 5 == 0):
    if(withdraw + 0.5 <= balance):
        balance = balance - withdraw - 0.5
 
print("{0:.2f}".format(balance)) 
