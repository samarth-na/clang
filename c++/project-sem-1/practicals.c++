#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int simpleandcompountintrest() {
    int p = 100;
    int r = 10;
    int t = 1;
    int n = 12;
    struct Result {
        int value1;
        int value2;
    };
    int amount = p * r * t;

    int Sinterest = amount / 100;
    // compount inrest
    int Cintrest;
    Cintrest = p * (1 + r / n) - p;

    cout << Sinterest << "\n" << Cintrest << "\n";
    return 0;
}

// sum of odd annd even number from an array
void sumofoddandeven() {
    int even = 0;
    int odd = 0;
    int a[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i; i < 10; i++) {
        if (a[i] % 2 == 0) {
            even = even + a[i];
        } else {
            odd = odd + a[i];
        }
    }
    std::cout << even << "\n";
    std::cout << odd << "\n";
}

int reccursionFib(int n) {
    int varibale;
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return reccursionFib(n - 1) + reccursionFib(n - 2);
    }
}
void matrixmultiplication() {
    int mata[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matb[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int ans[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            ans[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                ans[i][j] += mata[i][k] * matb[k][j];
            }
            std::cout << ans[i][j] << "\n";
        }
    }
}
