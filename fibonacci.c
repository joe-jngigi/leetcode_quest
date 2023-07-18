// cat fib.c

#include <stdio.h>;

int main(void){
    printf("Yes yes");
    int x, y, z;

    while (1){
        x = 0;
        y = 1;

        /* code */
        do{
            /* code */
            printf("%d/n", x);
            z = x + y;
            x = y;
            y = z;


        } while (x < 255);
        
    }
    
}