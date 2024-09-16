#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int nilai;
   fscanf(stdin, "%d", &nilai);
    
    int data[nilai];
    
    for (int i = 0; i < nilai; i++){
        fscanf(stdin, "%d", &data[i]);
    }
    
    for (int i = 0; i < nilai - 1; i++) {
        for (int j = 0; j < nilai - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                int temp = data[j];
                data[j] = data[j + 1];
                data [j + 1] = temp;
            }
        }
        }
     for (int i = 0; i < nilai; i++) {
            fprintf(stdout, "%d\n", data[i]);
    }

    return 0;
}
