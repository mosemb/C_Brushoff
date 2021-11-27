#include <stdio.h>


int main(){

    int  arr2d [4] [2] = { {1,6}, {7,6}, {9,0}, {78,34}};

    for(int i = 0; i<4; i++){
        for(int j = 0; j<2; j++){

            printf(",%d", arr2d[i][j]);
        }

        printf("\n");
    }



}