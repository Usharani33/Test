 #include <stdio.h>
#define MAX 10
 
int main() {
    int arr[MAX][MAX];
    int n;
 
    printf("Enter the dimension of the Square matrix (max %d): ", MAX);
    scanf("%d", &n);
 
    if (n <= 0 || n > MAX) {
        printf("Invalid dimension.\n");
        return 1;
    }
 
    printf("\nEnter the elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
 
    // Print full matrix
    printf("\nThe matrix you entered is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
 
    // Print Bottom Upper Triangle
    printf("\nBottom Upper Triangle elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
 
            // Bottom half of upper triangle → j >= i AND i >= n/2
            if (j >= i && i >= n / 2)
                printf("%d\t", arr[i][j]);
            else
                printf("\t");
        }
        printf("\n");
    }
 
    return 0;
}
