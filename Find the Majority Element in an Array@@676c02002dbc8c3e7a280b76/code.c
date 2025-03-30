// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Input elements of the array
    }
    int flag=0;
    int maxcount=0;
    int maxelement=arr[0];
    // Loop through each element to print its frequency
    for (int i = 0; i < n; i++) {
        int count = 1;  // Count current element
        if (arr[i] != -1) {  // Check if the element is already counted
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;  // Increment count if the element is found again
                    arr[j] = -1;  // Mark the element as counted
                }
            }
            
        }
        if(count>maxcount){
            flag=1;
        maxelement=arr[i];
    }
    }
    if(flag){
        printf("%d",maxelement);
    }
    else{
        printf("-1");
    }
    return 0;
}
