#include <stdio.h>

int c(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int LCM(int a, int b) {
    int gcd = c(a, b);
    int lcm = (a * b) / gcd;
    return lcm;
}

int Arr(int arr[], int s) {
    int lcm = arr[0];
    for (int i = 1; i < s; i++) {
        lcm = LCM(lcm, arr[i]);
    }
    return lcm;
}

int main() {
    int p;
    printf("Enter the number of numbers p: ");
    scanf("%d", &p);

    int num[p];
    printf("Enter %d natural numbers: ", p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &num[i]);
    }

    int lcm = Arr(num, p);

    printf("Least common multiple: %d\n", lcm);

    return 0;
}
