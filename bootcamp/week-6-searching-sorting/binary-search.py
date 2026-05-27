arr = [1, 2, 3, 4, 5]
num = int(input("Enter a number to search: "))
def binary_search(arr, num):
  low = 0
  high = len(arr) - 1
  while low <= high:
    mid = (low + high) // 2
    if arr[mid] == num:
      return mid
    elif arr[mid] < num:
      low = mid + 1
    else:
      high = mid - 1
  return -1
  
result = binary_search(arr, num)
if result != -1:
  print(f"Number found at index: {result}")
else:
  print("Number not found in the array.")
