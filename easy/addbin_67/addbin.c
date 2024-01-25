#include <stdlib.h>
char* addBinary(char* a, char* b) {
    long int n=atoi(a)+atoi(b);
    long int w=1,bin;
    char bi[100000];
    while(n!=0){
        bin=bin+(n%2*w);
        w*=10;
        n/=2;
    }
    sprintf(bi,"%ld",bin);
    return bi;
}