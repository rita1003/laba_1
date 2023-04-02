#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char *getInput() { 
    char *str = (char *)malloc(100);
    printf("Введите строку: ");
    fgets(str, 100, stdin);
    return str;
}

bool testInput(char str[100]) {
    int i, n = 0;
    for (i = 0; str[i]!=0; i++) 
        if ((str[i]>='0' && str[i]<='9') || (str[i]=='-'))
            n++;
    return (str[0]=='-'&&n==i-1)||(n+1)==i;
}

long strToInt(char str[100]) {
    long result = strtol(str, NULL, 10);
    return result;
}

void printInt(long result) {
    printf ("%ld", result);
}

int main() {
    char *str = getInput();
    bool research = testInput(str);
    if (research) {
        long newstr = strToInt(str);
        printInt(newstr);
    }
    else 
        printf("Введенную строчку нельзя преобразовать в число");
    return 0;
}