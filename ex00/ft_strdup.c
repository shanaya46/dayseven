#include <stdio.h>
#include <string.h>

char *ft_strdup(char *src){
    static char duplicate[30];
    int i;

    for (i = 0; i <= strlen(src); i++){
        duplicate[i] = src[i];
    }

    return duplicate;
}

int main (){
    char src[20] = "hello";

    printf("The duplicate of '%s' is '%s'\n", src, ft_strdup(src));

}