arr = [1, 2, 3, 4, 5]
num = int(input("Enter a number to search: "))
flag = False
index = 0;
for i in range(len(arr)):
  if arr[i] == num:
    flag = True
    index = i
    break

if flag: print("Number found at index", i)
else: print("Number not found in the array")

  
