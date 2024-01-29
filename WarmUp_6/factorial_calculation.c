#include <stdio.h>

int main (int argc, char** argv)
{
    int number = 5;
    printf("Factorial of %d is: %d \n", number, factorial(number));
    return 0;
}
int factorial(int n){
    if(n <= 0){
        return 1;
    }
    else{
        return n * factorial(n - 1);
    }
}