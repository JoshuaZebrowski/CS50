#include <stdio.h>
#include <stdbool.h>

int main(void){

    int start = 0;
    bool isGood = false;
    printf("Start size: ");
    scanf("%i", &start);

    while (!isGood){
        if (start > 9){
        isGood = true; 
        }
        else {
            printf("Start size: ");
            scanf("%i", &start);
        }
    }



    int end = 0;
    bool isGood2 = false;
    printf("End size: ");
    scanf("%i", &end);

     while (!isGood2){
        if (end > start){
        isGood2 = true; 
        }
        else {
            printf("End size: ");
            scanf("%i", &end);
        }
    }

//every year, n/3 llamas are born
//every year, n/4 llamas die 

int years = 0; 
bool reached = false; 

while (!reached){
    if (start >= end){
        break;
    }
    else {
        int x = start/3;
        int y = start/4;
        start = start + (x - y);
        years++;
    }
}

printf("Years: %i", years);


}