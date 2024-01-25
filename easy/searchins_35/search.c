int searchInsert(int* nums, int numsSize, int target) {
    int i=0,p;
    for(i=0;i<numsSize;i++){
        if(nums[i]==target||nums[i]>target){
            p=i;
            break;
        }
    }
    return p;
}