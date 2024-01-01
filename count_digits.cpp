#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> array(N);

    for (int i = 0; i < N; ++i) {
        std::cin >> array[i];
    }

    for (int i = 0; i < N; ++i) {
        int count = 0;
        int num = array[i];

        if (num == 0) {
            count = 1;
        } else {
            while (num != 0) {
                num /= 10;
                ++count;
            }
        }

        std::cout << count << " ";
    }

    return 0;
}