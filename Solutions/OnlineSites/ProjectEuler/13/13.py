'''
Took about 1ms to run
'''

sum = 0
for i in range(100):
    x = int(input())
    sum += x

digits = str(sum)[:10]
print(digits)

