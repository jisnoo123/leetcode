double myPow(double x, long int n) {
    double res=1;
    long int c=1;
    if(x==1){
        return 1;
    }
    if(n>0){
        while(c<=n){
            res=res*x;
            c++;
        }
    }
    else if(n<0){
        n=-n;
        while(c<=n){
            res=res/x;
            c++;
        }
    }
    return res;
}