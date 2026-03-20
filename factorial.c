#include <stdio.h>
int main(){
    int i, number;
    long long factorial=1;
    printf("enter a number :");
    scanf("%d, &number");
    if(number< 0) {
        printf("factorial is not defined for negative numbers.\n");
     }  else{
    for(i=1; i<=number; i++){
        factorial *=i;
    }
    printf("factorial of %d is : %lld\n", number , factorial);
}
return 0;
}
