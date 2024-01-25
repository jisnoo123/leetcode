int removeElement(int* nums, int numsSize, int val) {
    int k=0,c=0,*p=nums;
    int arr[numsSize];
    for(int i=0;i<numsSize;i++){
        if(val==(*nums)){
            k++;
        }
        else{
            arr[c]=*nums;
            c++;
        }
        *nums=-1;
        nums++;
    }
    c=0;
    nums=p;
    for(int i=0;i<numsSize;i++){
        *nums=arr[c];
        nums++;
        c++;
    }
    return numsSize-k;
}