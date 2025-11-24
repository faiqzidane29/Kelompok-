#include <stdio.h>
#include <stdbool.h>

int main(){
    bool running = true; 
    int x;

    while(running){
        printf("Masukkan angka (999 untuk stop): ");
        scanf("%d", &x);

        if(x == 999){
            running = false; // menghentikan loop
        } else {
            printf("Anda memasukkan %d\n", x);
        }
    }

    printf("Program selesai");
}
