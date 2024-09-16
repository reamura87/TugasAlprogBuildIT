#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int angkaprima(int nilai)
    {
    if(nilai < 1){
        return 0;
    }
    
    for(int i = 2; i< nilai; i++)
    {
        if(nilai % 2 == 0)
        {
            return 0;
        }
        
    }
    return 1;
}

int main() {
    int angka;
    fscanf(stdin, "%d", &angka);
    

    if(angkaprima(angka)==0)
    {
        fprintf(stdout, "BUKAN");
    } else {
        fprintf(stdout, "PRIMA");
    }
    
}