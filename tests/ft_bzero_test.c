#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <assert.h>

void ft_bzero(void *s, size_t n);

void test_normal_case() {
    char str1[15] = "Hello World!";
    char str2[15] = "Hello World!";
    
    printf("Test 1 - Normal case with character array\n");
    printf("Before ft_bzero: %s\n", str1);
    printf("Before bzero:    %s\n", str2);
    
    ft_bzero(str1, 5);
    bzero(str2, 5);
    
    printf("After ft_bzero:  ");
    for (int i = 0; i < 15; i++)
        printf("%c", str1[i] ? str1[i] : '.');
    printf("\nAfter bzero:     ");
    for (int i = 0; i < 15; i++)
        printf("%c", str2[i] ? str2[i] : '.');
    printf("\n");
    
    assert(memcmp(str1, str2, 15) == 0);
    printf("Test 1 passed!\n\n");
}

void test_zero_length() {
    char str1[15] = "Hello World!";
    // char str2[15] = "Hello World!";
    char original[15] = "Hello World!";
    
    printf("Test 2 - Zero length\n");
    printf("Before ft_bzero: %s\n", str1);
    
    ft_bzero(str1, 0);
    // For zero-length, we'll compare against the original string
    
    assert(memcmp(str1, original, 15) == 0);
    printf("Test 2 passed!\n\n");
}

void test_full_length() {
    char str1[15] = "Hello World!";
    char str2[15] = "Hello World!";
    size_t len = strlen(str1);
    
    printf("Test 3 - Full string length\n");
    printf("Before ft_bzero: %s\n", str1);
    printf("Before bzero:    %s\n", str2);
    
    ft_bzero(str1, len);
    bzero(str2, len);
    
    printf("After ft_bzero:  ");
    for (int i = 0; i < 15; i++)
        printf("%c", str1[i] ? str1[i] : '.');
    printf("\nAfter bzero:     ");
    for (int i = 0; i < 15; i++)
        printf("%c", str2[i] ? str2[i] : '.');
    printf("\n");
    
    assert(memcmp(str1, str2, len) == 0);
    printf("Test 3 passed!\n\n");
}

void test_with_integers() {
    int *arr1 = (int*)malloc(5 * sizeof(int));
    int *arr2 = (int*)malloc(5 * sizeof(int));
    
    // Initialize arrays with some values
    for (int i = 0; i < 5; i++) {
        arr1[i] = 42;
        arr2[i] = 42;
    }
    
    printf("Test 4 - Integer array\n");
    ft_bzero(arr1, 5 * sizeof(int));
    bzero(arr2, 5 * sizeof(int));
    
    assert(memcmp(arr1, arr2, 5 * sizeof(int)) == 0);
    
    // Verify all values are zero
    for (int i = 0; i < 5; i++) {
        assert(arr1[i] == 0);
    }
    
    free(arr1);
    free(arr2);
    printf("Test 4 passed!\n\n");
}

void test_large_size() {
    size_t size = 1024;
    char *str1 = malloc(size);
    char *str2 = malloc(size);
    
    // Fill with non-zero values
    memset(str1, 'A', size);
    memset(str2, 'A', size);
    
    printf("Test 5 - Large size\n");
    ft_bzero(str1, size);
    bzero(str2, size);
    
    assert(memcmp(str1, str2, size) == 0);
    
    // Verify all values are zero
    for (size_t i = 0; i < size; i++) {
        assert(str1[i] == 0);
    }
    
    free(str1);
    free(str2);
    printf("Test 5 passed!\n\n");
}

int main() {
    printf("Starting ft_bzero tests...\n\n");

    test_normal_case();
    test_zero_length();
    test_full_length();
    test_with_integers();
    test_large_size();

    printf("All tests passed successfully!\n");
    return 0;
}
