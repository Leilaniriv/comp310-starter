#include <stdio.h>

int main (int argc, char** argv)
{
    char strArray[] = "Hello";
    int length = sizeof(strArray) / sizeof(strArray[0]) - 1;
    for (int i = 0, j = length - 1; i < j; i++, j--){
        char temp = strArray[i];
        strArray[i] = strArray[j];
        strArray[j] = temp;
    }
    printf("%s \n", strArray);
    return 0;
}