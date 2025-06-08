class Solution:
    def rotateArray(self, arr, d):
        n = len(arr)
        d = d % n
        if d == 0:
            return arr

        # Step 1: Reverse the first d elements
        self.reverseArray(arr, 0, d-1)
        
        # Step 2: Reverse the remaining n-d elements
        self.reverseArray(arr, d, n-1)
        # Step 3: Reverse the entire array
        self.reverseArray(arr, 0, n-1)
        return arr
    # Helper function to reverse a portion of the array
    # This function reverses the elements of arr from index start to end
    


    def reverseArray(self, arr, start, end):
        while start < end:
            arr[start], arr[end] = arr[end], arr[start]
            start += 1
            end -= 1
        return arr
    
solution = Solution()
arr = [1, 2, 3, 4, 5]
d = 2
rotated_array = solution.rotateArray(arr, d)
print("Rotated array:", rotated_array)