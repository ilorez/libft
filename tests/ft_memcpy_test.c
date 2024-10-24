#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void *ft_memcpy(void *dst, const void *src, size_t n);
void test_ft_memcpy()
{
    char src[] = "Hello, World!";
    char dst[20];
    char *ret;

    // Test 1: Normal copy
    ret = ft_memcpy(dst, src, strlen(src) + 1);  // +1 to include the null terminator
    if (ret != dst || strcmp(src, dst) != 0)
        printf("Test 1 failed: expected '%s' but got '%s'\n", src, dst);
    else
        printf("Test 1 passed.\n");

    // Test 2: src == dst (copy to the same location)
    ret = ft_memcpy(dst, dst, strlen(src) + 1);
    if (ret != dst || strcmp(src, dst) != 0)
        printf("Test 2 failed: expected '%s' but got '%s'\n", src, dst);
    else
        printf("Test 2 passed.\n");

    // Test 3: src or dst is NULL (should return NULL)
    if (ft_memcpy(NULL, src, strlen(src)) != NULL)
        printf("Test 3 failed: expected NULL but got a non-NULL result.\n");
    else
        printf("Test 3 passed.\n");

    if (ft_memcpy(dst, NULL, strlen(src)) != NULL)
        printf("Test 4 failed: expected NULL but got a non-NULL result.\n");
    else
        printf("Test 4 passed.\n");
}

int main()
{
    test_ft_memcpy();
    return 0;
}

