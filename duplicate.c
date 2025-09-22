#include<stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int buffer[n];
    int buf_index = 0;
    printf("Duplicate elements are: ");
    for(int i = 0; i < n; i++) {
        int is_duplicate = 0;
        for(int k = 0; k < buf_index; k++) {
            if(buffer[k] == arr[i]) {
                is_duplicate = 1;
                break;
            }
        }
        if(is_duplicate) continue;
        for(int j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                buffer[buf_index++] = arr[i];
                break;
            }
        }
    }
    return 0;
}