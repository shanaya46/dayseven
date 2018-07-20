#include <stdio.h>
#include <string.h>


int ft_ultimate_range(int **range, int min, int max){
    int j = 0;
    int i;
    if (min < max) {
        static int array[200];
        for (i = min; i < max; i++){
            array[j] = i;
            j++;
        }
        return (max - min);
    }
    else {
        int *range = NULL;
        return range;
    }

}

int main (){

}