# again!! will do in cpp later.

#!/usr/bin/python3
num = 2**1000
num_str = str(num)

sum = 0
for i in range(len(num_str)) :
    sum = sum + int(num_str[i])

print(sum)