# By: Jim Dong
# Solution for Project Euler problem 1
# Naive algorithm, runs on O(n) where n is the input number

start = 0
sum = 0
while ( start != 1000):
    if (start % 3 == 0 or start % 5 == 0) :
        sum +=start
    start += 1
print sum

