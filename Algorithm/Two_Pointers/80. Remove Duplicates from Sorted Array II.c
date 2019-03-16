//˫ָ�뷨 
int removeDuplicates(int* nums, int numsSize) {
    if(!numsSize) return 0;
    int index = 0, tolerate = 1;
    for(int i = 1; i < numsSize; i++){
        if(nums[index] != nums[i] || tolerate)
        {
            tolerate = 0;
            if(nums[index] != nums[i])
                tolerate = 1;
            index++;
            nums[index] = nums[i];
        }
    }
    return index + 1;
}
