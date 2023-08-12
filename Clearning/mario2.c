#include <stdio.h>
#include <stdbool.h>


int main(void){

    int height = 0;
    printf("Height: ");
    scanf("%i", &height);

    for (int i = 1; i <= height; i++){

        for (int j = 1; j <= height; j++){
            if (j <= (height - i)){
                printf(" ");
            }
            else {
                printf("#");
            }
        }

    printf(" ");

        for (int k = 1; k <= height; k++){
                if (k <= (i)){
                    printf("#");
                }
                else {
                    printf(" ");
                }
            }

    printf("\n");
}

}


