int removeDuplicates(int* nums, int numsSize) {
    int *p=nums,ou,in,k=-numsSize,ca=0,c,arr[10000];
    for(int i=0;i<numsSize;i++){
        ou=nums[i];
        c=0;
        for(int j=0;j<numsSize;j++){
            in=nums[j];
            if(ou==in){
                k++;
                if(c==0){
                    arr[ca]=ou;
                    c++;
                    ca++;
                }
            }
            *nums=-1;
        }
    }
    nums=p;
    ca=0;
    for(int i=0;i<numsSize-k;i++){
        *nums=arr[ca];
        nums++;
        ca++;
    }
    return numsSize-k;
}