#!/usr/bin/python3

def fact(n):
    if(n==1 or n==0):
        return n
    else:
        return n*fact(n-1)

temp = fact(100)
print(temp)

sum = 0
while(temp):
    sum = sum + temp%10
    temp = temp//10

print(sum)
