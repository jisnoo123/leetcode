#include <math.h>
int divide(long long int dividend,long long int divisor) {
    long long int sum=0,q=0,c=0;
    if(divisor==-1){
        if(-dividend>=pow(2,31)){
            return (pow(2,31))-1;
        }
        return -dividend;
    }
    else if(divisor==1){
        return dividend;
    }
    if (divisor<0&&dividend<0){
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
    if(divisor==1&&c==0){
        return dividend;
    }
    else if((divisor==1&&c==1)||(divisor==-1&&c==1)){
        return -dividend;
    }

    while(sum<=dividend){
        sum+=divisor;
        if(sum>dividend)
            break;
        q++;
    }
    if(q>pow(2,31)){
        return (pow(2,31))-1;
    }
    else if(q<-(pow(2,31))){
        return -(pow(2,31));
    }
    else if(c==1)
        return -q;
    else
        return q;
}