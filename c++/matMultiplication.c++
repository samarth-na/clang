#include <iostream>
int matrixmultiplication() {
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
    return 0;
}

int main() {
    ;
    matrixmultiplication();
    return 0;
}
