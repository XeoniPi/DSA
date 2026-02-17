# class LinearSearch:
#     def solve(arr,target):
#         for i in range(len(arr)):
#             if(arr[i] == target):
#                 return i
#         return -1


# if __name__ == "__main__":
#     arr = [1,2,3,4,5,6,7,8,9]
#     target = 5
#     print(LinearSearch.solve(arr,target))

class BinarySearch:
    def solve(arr, target):
        left = 0
        right= len(arr) - 1
        while left <= right:
            mid = left + (right - left) // 2
            if arr[mid] == target:
                return mid
            elif arr[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        return -1
    
if __name__ == "__main__":
    arr = [1,2,3,4,5,6,7,8,9]
    target = 8
    print(BinarySearch.solve(arr,target))