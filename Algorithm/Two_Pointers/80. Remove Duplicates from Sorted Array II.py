class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        size = len(nums)
        if size <= 2:
            return size
        index = 2
        for i in range(2, size):
            if nums[index - 2] != nums[i]:
                nums[index] = nums[i]
                index += 1
        return index
        