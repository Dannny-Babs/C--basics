#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i, j;
    int* result = (int*)malloc(2 * sizeof(int));
    for (i = 0; i < numsSize; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

#define MAX_SIZE 1000

typedef struct {
    int key;
    int value;
} HashMap;

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    HashMap numMap[MAX_SIZE];
    int mapSize = 0;
    int* result = (int*)malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        for (int j = 0; j < mapSize; j++) {
            if (numMap[j].key == complement) {
                result[0] = numMap[j].value;
                result[1] = i;
                *returnSize = 2;
                return result;
            }
        }
        numMap[mapSize].key = nums[i];
        numMap[mapSize].value = i;
        mapSize++;
    }
    *returnSize = 0;
    free(result);
    return NULL;
}


int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    int* result = twoSum(nums, 4, target, &returnSize);
    if (result != NULL) {
        printf("Indices: %d, %d\n", result[0], result[1]);
        free(result);
    } else {
        printf("No solution found.\n");
    }
    return 0;
}