/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* res=(int*)(malloc(2*sizeof(int)));
    int flag=0;
    for(int i=0;i<numsSize;i++){
        int a=nums[i];
        for(int j=i+1;j<numsSize;j++){
            int b=nums[j];
            if(a+b==target){
                res[0]=i;
                res[1]=j;
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    *returnSize=2;
    return res;
}