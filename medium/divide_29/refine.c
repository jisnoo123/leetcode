#include<math.h>
int divide(long long int dividend, long long int divisor) {
    long long int q=0,c=0,sum=0;
    //Divisor=1
    if(divisor==1){
        q=dividend;
    }
    else if(divisor==-1){
        q=-dividend;
    }
    //Checking the sign of the divisor and dividend,c=1 means quotient 
    //would be -ve
    else if(divisor<0&&dividend<0){
        divisor=-divisor;
        dividend=-dividend;
    }
    else if(divisor<0&&divisor!=-1){
        c++;
        divisor=-divisor;
    }
    else if(dividend<0){
        dividend=-dividend;
    }
    //calculation of quotient
    if(divisor!=1&&divisor!=-1){
        while(sum<=dividend){
            sum+=divisor;
            if(sum>dividend)
                break;
            q++;
        }
    }
    //returning quotient
    if(q>pow(2,31)){
        return (pow(2,31))-1;
    }
    else if(q<-(pow(2,31))){
        return -(pow(2,31));
    }
    else if(c==1){
        return -q;
    }
    else
        return q;
}