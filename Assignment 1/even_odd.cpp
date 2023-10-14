#include <iostream>

int main()
 {
    int arr[101];

    for (int i = 0; i <= 100; i++) {
        arr[i] = i;
        if (arr[i] % 2 == 0) {
            std::cout << arr[i] << " is even." << std::endl;
        } else {
            std::cout << arr[i] << " is odd." << std::endl;
        }
    }

    return 0;
}