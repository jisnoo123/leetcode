#include <stdlib.h>
long long int reverse(long long int x){
    long long int c=0,r=0;
    if(x<0){
        c++;
        x=-x;
    }
    while(x!=0){
        r=r*10+(x%10);
        x=x/10;
    }
    if(r<-2147483648||r>2147483647)
        return 0;
    else if(c==0){
        return r;
    }
    else 
        return -r;
}