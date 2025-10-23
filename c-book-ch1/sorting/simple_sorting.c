#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ARR_SIZE 10


void bubble_sort(char arr[]);
void swap(int a, int b);


int main() {

	bool stop = false;	

	char arr[ARR_SIZE];

    int i = 0;

	while(!stop) {
        arr[i] = getchar();
        
        if(arr[i] == '\n') {
            stop = true;
        } else {
            i++;
        }
        
        if(i == ARR_SIZE) {
            stop = true;
        }
    }
    
    bubble_sort(arr);

    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%c ", arr[i]);
    }

    exit(EXIT_SUCCESS);
}

void bubble_sort(char arr[]) {
    for (int i = 0; i < ARR_SIZE; i++) {
        for (int j = i; j <= ARR_SIZE; j++) {
            //printf("%c %c\n", arr[i], arr[j]);
            if (arr[i] > arr[j]) { 
                swap(arr[i], arr[j]);
            }
        }
    }

}

void swap(int a, int b) {
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}
