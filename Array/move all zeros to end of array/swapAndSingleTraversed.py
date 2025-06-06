class Solution:
    def moveZeros(self, arr):
        count = 0

        for i in range(len(arr)):
            if arr[i] !=0:
                arr[count] , arr[i] = arr[i], arr[count]
                count += 1
        return arr



solution = Solution()
arr = [0, 1, 0, 3, 12]

end_Of_array = solution.moveZeros(arr)

print("Array after moving zeros:", end_Of_array)