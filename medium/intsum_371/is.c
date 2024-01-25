#include <math.h>
long int bin(int n){
    long int r=0;
    int w=1;
    while(n!=0){
        r=r+(n%2)*w;
        w*=10;
        n=n/2;
    }
    return r;
}
long int deci(long int n){
    long int dec=0;
    int c=0;
    while(n!=0){
        dec=dec+(pow(2,c)*(n%10));
        n=n/10;
        c++;
    }
    return dec;
}
int getSum(int a, int b) {
    long int a1,b1;
    a1=bin(a);
    b1=bin(b);
    long int res=a1+b1;
    return deci(res);
}