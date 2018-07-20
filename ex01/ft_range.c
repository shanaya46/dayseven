#include <stdio.h>
#include <string.h>

int *ft_range(int min, int max) {
    int j = 0;
    int i;
    if (min < max) {
        static int range[200];
        for (i = min; i < max; i++){
            range[j] = i;
            j++;
        }
        return range;
    }
    else {
        int *range = NULL;
        return range;
    }

}

int main () {
    int min = 10;
    int max = 72;
    int i;
    int *range;
    range = ft_range(min, max);

    for (i = 0; range[i] != '\0'; i++) {
        printf ("%d ", range[i]);
    }

    printf("\n");

}
