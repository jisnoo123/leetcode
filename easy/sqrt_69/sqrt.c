long long int mySqrt(long long int x) {
    long long int v,i;
    for(i=(x==1)?x:x/2;i>=0;i--){
        if((i*i)<=x){
            v=i;
            break;
        }
    }
    return v;
}