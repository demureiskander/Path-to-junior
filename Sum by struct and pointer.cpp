#include <stdio.h>

struct Pair {
    int first;
    int second;
};

int sum(struct Pair *pmyNumbers) {
    int res = pmyNumbers->first + pmyNumbers->second;
    return res;
}

int main() {
    struct Pair myNumbers = {5, 10};
    struct Pair *pmyNumbers = &myNumbers;

    int sumResult = sum(pmyNumbers);

    printf("Sum Result: %d\n", sumResult);
    return 0;
}
