#include <stdio.h>

int main(){
    // String Array Must be 2 Dimensions
    char text[][10] = { 
        "Gordon",
        "Hero",
        "Tim",
        "Curry"
    };

    int size = sizeof(text) / sizeof(text[0]);

    for (int i=0; i<size; i++){
        printf("%s\n", text[i]);
    }
}