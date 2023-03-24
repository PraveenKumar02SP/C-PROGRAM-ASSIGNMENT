#include <stdio.h>

int main() {
   int n, i, j, count;
   printf("Print all unique elements of an array:\n");
   printf("---------------------------------------\n");
   printf("Input the number of elements to be stored in the array: ");
   scanf("%d", &n);

   int arr[n];
   printf("Input %d elements in the array:\n", n);
   
   for(i = 0; i < n; i++) {
      printf("element - %d : ", i);
      scanf("%d", &arr[i]);
   }

   printf("The unique elements in the array are: ");
   for(i = 0; i < n; i++) {
      count = 0;
      for(j = 0; j < n; j++) {
         if(arr[i] == arr[j] && i != j) {
            count++;
            break;
         }
      }
      if(count == 0)
         printf("%d ", arr[i]);
   }

   return 0;
}
output:
Print all unique elements of an array:
---------------------------------------
Input the number of elements to be stored in the array: 4
Input 4 elements in the array:
element - 0 : 3
element - 1 : 2
element - 2 : 2
element - 3 : 5
The unique elements in the array are: 3 5 