lst = input("").split(" ")
 
diff = str(int(abs(int(lst[0]) - int(lst[1]))))
 
if diff[0] != '5':
    diff = '5' + diff[1:]
else:
    diff = '4' + diff[1:]
 
print(diff) 
