class Solution:
    def moveZeros(self, arr):
        n = len (arr)

        temp = [0] * n  # Temporary array to hold non-zero elements

        j=0

        for i in range(n):
            if arr[i] != 0:
                temp[j] = arr[i]
                j += 1
        
        return temp



solution = Solution()
arr = [0, 1, 0, 3, 12]

end_Of_array = solution.moveZeros(arr)

print("Array after moving zeros:", end_Of_array)