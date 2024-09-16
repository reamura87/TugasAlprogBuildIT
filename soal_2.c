#include <stdio.h>
#include <string.h>

int main() {
    char A[101], B[101];
    
    fgets(A, sizeof(A), stdin);
    fgets(B, sizeof(B), stdin);
    
    A[strcspn(A, "\n")] = '\0';
    A[strcspn(B, "\n")] = '\0';
    
    if (strcmp(A, B) == 0) {
        printf("IDENTIK\n");
    } else if (strlen(A) == strlen(B)) {
        printf("MIRIP\n");
    } else {
        printf("BERBEDA\n");
    }
    
    return 0;
}