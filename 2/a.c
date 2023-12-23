#include <stdio.h>
int main() {
    int num, one, ten, hundred, thousand, tenthousand, sum;
    printf("Enter the number = ");
    scanf("%d", &num);
    one = num % 10;
    ten = (num/10) % 10;
    hundred = (num/100) % 10;
    thousand = (num/1000) % 10;
    tenthousand = num/10000;
    sum = one + ten + hundred + thousand + tenthousand;
    printf("Sum of the digits = %d.", sum);
    return 0;
}






