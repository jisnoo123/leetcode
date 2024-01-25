int climbStairs(int n) {
    int one,two;
    one = 1;
    two=1;
    for(int i=1;i<n;i++){
        int temp=one;
        one=one+two;
        two=temp;
    }
    return one;
}