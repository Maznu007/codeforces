nums = list(map(int, input().split()))
nums.sort()
s = nums[3]          # a+b+c
a = s - nums[0]
b = s - nums[1]
c = s - nums[2]
print(a, b, c)
