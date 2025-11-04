#include <stdio.h>

int main() {

    int total_commas = 0;
    int total_stops  = 0;

    int this_char = getchar();    

    while (this_char != EOF) {
        if (this_char == ',') {
            total_commas++;
        }
        
        if(this_char == '.') {
            total_stops++;
        }    
        this_char = getchar();
    }

    printf("commas: %d, stops: %d\n", total_commas, total_stops);

    return 0;
}
