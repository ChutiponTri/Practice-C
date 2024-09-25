#include <stdio.h>

int main() {
    // Modes are 
    // "a" for keep the existing
    // "w" for write all
    // "r" for read

    FILE *pF = fopen("D:\\Practice C\\hello.txt", "r");        

    char buf[255];

    if (pF == NULL){
        printf("Unable to open file\n");
    } else {
        // Read Multiple Lines
        while (fgets(buf, 255, pF) != NULL){
            printf("%s", buf);  
        }
    }
    
    fclose(pF);

    return 0;
}
