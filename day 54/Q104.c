/*
Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
Input 1:
n = 8
Output 1:
6
Explanation 1:
6 is the pivot integer since: 1 + 2 + 3 + 4 + 5 + 6 = 6 + 7 + 8 = 21.
Input 2:
n = 1
Output 2:
1
Explanation 2:
1 is the pivot integer since: 1 = 1.
Input 3:
n = 4
Output 3:
-1
Explanation 3:
It can be proved that no such integer exists.
Follow-up 1 (optional): Can you do it in O(log n) Time Complexity? Follow-up 2 (optional): Can you do it in O(1) Time Complexity?
*/

#include <stdio.h>
int main(){
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the total sum from 1 to n
    int total_sum = n * (n + 1) / 2;
    int left_sum = 0;

    for (int x = 1; x <= n; x++) {
        left_sum += x;
        int right_sum = total_sum - left_sum + x; // sum from x to n

        if (left_sum == right_sum) {
            printf("Pivot integer x: %d\n", x);
            return 0;
        }
    }

    printf("Pivot integer x: -1\n");
    return 0;
}
