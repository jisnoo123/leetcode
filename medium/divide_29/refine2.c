#include <math.h>
int divide(long long int dividend,long long int divisor) {
    long long int sum=0,q=0,c=0;
    if(divisor==1){
        q=dividend;
    }
    else if(divisor==-1){
        q=-dividend;
    }
    else{
        if(divisor<0&&dividend<0){
            divisor=-divisor;
            dividend=-dividend;
        }
        else if(divisor<0){
            divisor=-divisor;
            c++;
        }
        else if(dividend<0){
            dividend=-dividend;
            c++;
        }
        while(sum<=dividend){
            sum+=divisor;
            if(sum>dividend)
                break;
            q++;
        }
    }
    if(q>=2147483648){
        return 2147483647;
    }
    else if(q<-2147483648){
        return -2147483648;
    }
    else if(c==1){
        return -q;
    }
    else
        return q;
}