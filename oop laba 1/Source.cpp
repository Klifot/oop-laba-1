#include <iostream>
#include <limits>

int main() {
    int N;
    std::cout << "Input N: ";
    std::cin >> N;

    int* A = new int[N]; 
    std::cout << "Input numbers: ";
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    int maxNegative = std::numeric_limits<int>::min(); 
    int maxNegativeIndex = -1;

    for (int i = 0; i < N; i++) {
        if (A[i] < 0 && A[i] > maxNegative) { 
            maxNegative = A[i];
            maxNegativeIndex = i;
        }
    }

    if (maxNegativeIndex != -1) {
        std::cout << "Max negative: " << maxNegative << std::endl;
        std::cout << "Indexc: " << maxNegativeIndex << std::endl;
    }
    else {
        std::cout << "dont have negative elemenet." << std::endl;
    }

    delete[] A; 
    return 0;
}