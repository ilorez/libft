#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void *ft_memset(void *b, int c, size_t len);

void test_normal_case() {
    char str1[15] = "Hello World!";
    char str2[15] = "Hello World!";
    
    printf("Test 1 - Normal case with character array\n");
    printf("Before ft_memset: %s\n", str1);
    printf("Before memset:    %s\n", str2);
    
    ft_memset(str1, '*', 5);
    memset(str2, '*', 5);
    
    printf("After ft_memset:  %s\n", str1);
    printf("After memset:     %s\n", str2);
    assert(memcmp(str1, str2, 15) == 0);
    printf("Test 1 passed!\n\n");
}

void test_zero_length() {
    char str1[15] = "Hello World!";
    // char str2[15] = "Hello World!";
    char original[15] = "Hello World!";
    
    printf("Test 2 - Zero length\n");
    printf("Before ft_memset: %s\n", str1);
    
    ft_memset(str1, '*', (size_t)0);
    // For zero-length, we'll compare against the original untouched string
    
    printf("After ft_memset:  %s\n", str1);
    // Verify no changes were made
    assert(memcmp(str1, original, 15) == 0);
    printf("Test 2 passed!\n\n");
}

void test_full_length() {
    char str1[15] = "Hello World!";
    char str2[15] = "Hello World!";
    size_t len = strlen(str1);
    
    printf("Test 3 - Full string length\n");
    printf("Before ft_memset: %s\n", str1);
    printf("Before memset:    %s\n", str2);
    
    ft_memset(str1, '-', len);
    memset(str2, '-', len);
    
    printf("After ft_memset:  %s\n", str1);
    printf("After memset:     %s\n", str2);
    assert(memcmp(str1, str2, len) == 0);
    printf("Test 3 passed!\n\n");
}

void test_with_integers() {
    int *arr1 = (int*)malloc(5 * sizeof(int));
    int *arr2 = (int*)malloc(5 * sizeof(int));
    
    printf("Test 4 - Integer array\n");
    ft_memset(arr1, 0, 5 * sizeof(int));
    memset(arr2, 0, 5 * sizeof(int));
    
    assert(memcmp(arr1, arr2, 5 * sizeof(int)) == 0);
    free(arr1);
    free(arr2);
    printf("Test 4 passed!\n\n");
}

void test_with_null_character() {
    char str1[15] = "Hello World!";
    char str2[15] = "Hello World!";
    
    printf("Test 5 - Null character\n");
    printf("Before ft_memset: %s\n", str1);
    printf("Before memset:    %s\n", str2);
    
    ft_memset(str1, '\0', 5);
    memset(str2, '\0', 5);
    
    assert(memcmp(str1, str2, 15) == 0);
    printf("After ft_memset:  %s\n", str1 + 5);
    printf("After memset:     %s\n", str2 + 5);
    printf("Test 5 passed!\n\n");
}

void test_large_size() {
    size_t size = 1024;
    char *str1 = malloc(size);
    char *str2 = malloc(size);
    
    printf("Test 6 - Large size\n");
    ft_memset(str1, 'A', size);
    memset(str2, 'A', size);
    
    assert(memcmp(str1, str2, size) == 0);
    free(str1);
    free(str2);
    printf("Test 6 passed!\n\n");
}

int main() {
    printf("Starting ft_memset tests...\n\n");

    test_normal_case();
    test_zero_length();
    test_full_length();
    test_with_integers();
    test_with_null_character();
    test_large_size();

    printf("All tests passed successfully!\n");
    return 0;
}
