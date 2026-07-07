#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LEN 100

// =========================
// PART A – HISTOGRAM
// =========================

void PrintHistogram(int hist[2][26]) {
    printf("Output histogram:\n");
    for (int i = 0; i < 26; ++i) {
        if (hist[1][i] == 0) continue;
        printf("%c: %d\n", hist[0][i], hist[1][i]);
    }
}

void StrHistogram() {
    char str[MAX_LEN];
    int hist[2][26] = { 0 };

    // fill in your code

    PrintHistogram(hist);
    return;
}

// =========================
// PART B – PALINDROME
// =========================

int isPalRec(char* str) {

    return 0; // change this line
}

void isPalindrome() {

     char str[MAX_LEN];

    // fill in your code 

    return;
}

// =========================
// MAIN FUNCTION
// =========================


int main() {

    // NOTICE: Main function – Do not modify. Used to select and run specific questions.

    int choice;

    printf("Select a question to run (1/2): ");
    scanf("%d", &choice);

    switch (choice) {
    case 1: {
        StrHistogram();
        break;
    }
    case 2: {
        isPalindrome();
        break;
    }
    default: {
        printf("Invalid choice!\n");
    }
    }

    return 0;
}
