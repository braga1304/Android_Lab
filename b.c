#include <stdio.h>

int main() {
    int km, m, f, in, cm;
    printf("Distance in kilometres = ");
    scanf("%d", &km);
    m = km * 1000;
    f = km * 3280;
    in = km * 39370;
    cm = km * 100000;
    printf("metres = %d\n", m);
    printf("feet = %d\n", f);
    printf("inches = %d\n", in);
    printf("centimetres = %d\n", cm);
    return 0;
}