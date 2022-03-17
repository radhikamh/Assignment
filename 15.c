#include <stdio.h>

int main()
{
    int arr[] = { 900, 940, 950, 1100, 1500, 1800 };
    int dep[] = { 910, 1200, 1120, 1130, 1900, 2000 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int result;
    printf("Minimum Number of Platforms Required = ");
    result = findPlatform(arr, dep, n);
    printf("%d",result);
    return 0;
}

int findPlatform(arr, dep, n);

int findPlatform(int arr[], int dep[], int n)
{
    int plat_needed = 1, result = 1;
    int i = 1, j = 0;

    while (i < n && j < n) {

        if (arr[i] <= dep[j]) {
            plat_needed++;
            i++;
        }
        else if (arr[i] > dep[j]) {
            plat_needed--;
            j++;
        }

        if (plat_needed > result)
            result = plat_needed;
    }

    return result;
}

