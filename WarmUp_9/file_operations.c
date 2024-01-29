#include <stdio.h>

int main (int argc, char** argv)
{
    FILE *fw, *br; 
    char filename[] = "example.txt";
    fw = fopen(filename, "w");

    fprintf(fw, "Hello, world!\n");
    fclose(fw);

    br = fopen(filename, "r");

    char line[1024];

    while (fgets(line, sizeof(line), br) != NULL) {
            printf("%s",line);
    }
    fclose(br);

    return 0;
}