#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_concat_params(int argc, char **argv) {
    char *dest = (char *)malloc(100);
    int k = 0;

    for (int i = 1; i < argc; i++) {
        for (int j = 0; j < strlen(argv[i]); j++){
            dest[k++] = argv[i][j];
        }
        dest[k++] = '\n';
    }
    dest[k++] = '\0';
    return dest;
}

int main(int argc, char *argv[]) {
    printf("%s", ft_concat_params(argc, argv));
}