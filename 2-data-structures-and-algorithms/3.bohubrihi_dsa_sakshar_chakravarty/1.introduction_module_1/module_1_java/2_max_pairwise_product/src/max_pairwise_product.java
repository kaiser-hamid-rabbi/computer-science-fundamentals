import java.util.*;
import java.io.*;
import java.lang.*;
import java.util.Random;

public class max_pairwise_product {
    // Get Maximum Pair-wise Product!
    static long getMaxPairwiseProduct(long[] numbers) {
        long max_product = 0;
        int n = numbers.length;

        for (int first = 0; first < n; ++first) {
            for (int second = first + 1; second < n; ++second) {
                max_product = Math.max(max_product,
                        numbers[first] * numbers[second]);
            }
        }

        return max_product;
    }
    // Get Maximum Pair-wise Product Optimized version!
    static long getMaxPairwiseProductOptimized(long[] numbers) {
        int n = numbers.length;
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
    static long stress_test(int N, int M) {
        while (true) {
            Random rand = new Random();
            int n = Math.abs((rand.nextInt() % N)); // 2 to N


            long[] nums = new long[n];
            if (n == 0 || n == 1) {
                continue;
            }
            else {
                System.out.println("Number of elements: " + n);
                for (int i = 0; i < n; i++) {
                    nums[i] = Math.abs(rand.nextInt() % M); // 0 to M
                }
            }

            System.out.println(Arrays.toString(nums));

            long res1 = getMaxPairwiseProduct(nums);
            long res2 = getMaxPairwiseProductOptimized(nums);
            if (res1 == res2) {
                System.out.println("Test Passed!");
            }
            else {
                System.out.println("Result mismatch found!");
                System.out.println("Naive => " + res1);
                System.out.println("Optimized => " + res2);
                break;
            }

        }
        return 0;
    }

    public static void main(String[] args) {
        FastScanner scanner = new FastScanner(System.in);
        System.out.print("Enter the number of elements: ");
        int n = scanner.nextInt();
        long[] numbers = new long[n];
        for (int i = 0; i < n; i++) {
            numbers[i] = scanner.nextInt();
        }
//        System.out.println("Maximum Pairwise Product Naive: " + getMaxPairwiseProduct(numbers));
        System.out.println("Maximum Pairwise Product Optimized: " + getMaxPairwiseProductOptimized(numbers));


//        int N = 100;
//        int M = 100000;
//        stress_test(N, M);

    }

    static class FastScanner {
        BufferedReader br;
        StringTokenizer st;

        FastScanner(InputStream stream) {
            try {
                br = new BufferedReader(new
                        InputStreamReader(stream));
            } catch (Exception e) {
                e.printStackTrace();
            }
        }

        String next() {
            while (st == null || !st.hasMoreTokens()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }
    }

}