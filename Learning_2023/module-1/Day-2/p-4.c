#include <stdio.h>
 int main()
 {
     int arr[] = {0x1, 0xF4, 0x10001};
     int n = sizeof(arr) / sizeof(arr[0]);
     int i, count = 0;
     for (i = 0; i < n; i++)
     {
         count += __builtin_popcount(arr[i]);
     }
     printf("%d", count);
     return 0;
 }