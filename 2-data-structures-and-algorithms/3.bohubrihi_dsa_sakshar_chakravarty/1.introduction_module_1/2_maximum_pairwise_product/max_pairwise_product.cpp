#include <iostream> /* for input, output */
#include <vector> /* for vector data data structure */
#include <algorithm> /* algorithm */
#include <stdlib.h> /* srand, rand */
#include <time.h> /* time */

using namespace std;

// Finding Max Pair-wise Product - Naive or brut-force version!
long long MaxPairwiseProductNaive(const vector<long long>& numbers) {
    long long max_product = 0;
    int n = numbers.size();

    for (int first = 0; first < n; ++first) {
        for (int second = first + 1; second < n; ++second) {
            max_product = max(max_product,
                numbers[first] * numbers[second]);
        }
    }

    return max_product;
}

// Finding Max Pair-wise Product - Optimized version!
long long MaxPairwiseProductOptmized(const vector<long long>& numbers) {
    int n = numbers.size();
    int index1 = -1;
    for (int i = 0; i < n; ++i) {
        if (index1 == -1 || numbers[i] > numbers[index1]) {
            index1 = i;
        }
    }
    int index2 = -1;
    for (int j = 0; j < n; ++j) {
        if (j != index1 && (index2 == -1 || numbers[j] > numbers[index2])) {
            index2 = j;
        }
    }
    return numbers[index1] * numbers[index2];
}

// Stress Testing for Maximum Pair-wise Product problem
long long stress_test(int N, int M) {
    while (true) {
        srand((unsigned) time(0));
        int n = (rand() % N) + 2; // 2 to N
        cout << "Number of elements: " << n << "\n";

        vector<long long> nums(n);

        for (int i = 0; i < n; i++) {
            nums[i] = (rand() % M); // 0 to M
        }
        // cout << "Generated Random List: " << nums << "\n";


        // print that generated random list with size n
        for (auto i = nums.begin(); i != nums.end(); ++i)
        cout << *i << " ";
        cout << "\n";


        long long res1 = MaxPairwiseProductNaive(nums);
        long long res2 = MaxPairwiseProductOptmized(nums);
        if (res1 == res2) {
            cout << "Test Passed!" << "\n";
        }
        else {
            cout << "Result mismatch found!" << "\n";
            cout << "Naive => " << res1 << "\n";
            cout << "Optimized => " << res2 << "\n";
            break;
        }

    }
    return 0;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<long long> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    /* cout << "Maximum Pairwise Product: ";
    cout << MaxPairwiseProductNaive(numbers) << "\n"; */

    cout << "Maximum Pairwise Product Optimized: ";
    cout << MaxPairwiseProductOptmized(numbers) << "\n";

    /* int N = 100;
    int M = 100;
    stress_test(N, M); */
    return 0;
}
