#include <stdbool.h>
bool isPalindrome(int x){
    long int b=x,r=0;
    if (x<0){
        return false;
    }
    //Reversing the number
    while(b!=0){
        r=(r*10)+(b%10);
        b/=10;
    }
    //Checking if palindrome or not
    if(x==r)
        return true;
    else
        return false;
}