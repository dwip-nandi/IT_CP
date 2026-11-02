#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    // ইউজারের কাছ থেকে n এর মান ইনপুট নেওয়া
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are: \n", n);

    // ১ থেকে n পর্যন্ত সংখ্যাগুলো চেক করার জন্য লুপ
    for (i = 2; i <= n; i++) {
        isPrime = 1; // ধরে নিচ্ছি সংখ্যাটি প্রাইম

        // ২ থেকে শুরু করে i এর পূর্ববর্তী সংখ্যা পর্যন্ত ভাগ করে চেক করা
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // যদি নিঃশেষে বিভাজ্য হয়, তবে এটি প্রাইম নয়
                break;       // লুপ থেকে বের হয়ে যাওয়া
            }
        }

        // যদি isPrime এর মান ১ হয়, তবে এটি মৌলিক সংখ্যা
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}