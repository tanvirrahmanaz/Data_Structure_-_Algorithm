class Solution:
    def rotateOneByOne(self, arr, d):
        n = len(arr)

        for i in range(d):

            temp = arr[0]

            for j in range(n-1):

                arr[j] = arr[j+1]
            
            arr[n-1] = temp
        return arr

solution = Solution()
arr = [1, 2, 3, 4, 5]
d = 2
rotated_array = solution.rotateOneByOne(arr, d)
print("Rotated array:", rotated_array)